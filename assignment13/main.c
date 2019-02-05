/******************************************************************
 *
 * This the outline for the "device driver"
 *
 *****************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include "device.h"

//
// My little interrupt handler
// (Should be written as part of STEP-1)
//
void my_irq() {
  // Handle interrupts here
  // This function should be small, and should not block indefinately.
  // ...
  //
  // You should inform the device that you have seen the interrupt.
  // You can use the status register to communicate with the device.
}

//
// Main function
//
int main(int argc, char *argv[])
{
  start_device_emulation();

  // Initialize the device:
  //  - STEP-1: Register interrupt handlers
  //  - STEP-2: Create the descriptors and buffers, and register them
  //  - STEP-3: Start the device running

  printf("NYI\n");
  while (true) {

      // STEP-4: Consume the data.

      // Try to receive from the device

      // If there's a valid descriptor, see what's in it, and return
      // ownership of it back to the device.

      // If there's no valid descriptor, then request an interrupt from
      // the device when new data is ready and go to sleep.

  }
  return 0;
}
