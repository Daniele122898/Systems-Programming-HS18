#ifndef __DEVICE_H_INCLUDED
#define __DEVICE_H_INCLUDED

#include <stddef.h>  // for size_t
#include <stdint.h>  // for uint32_t

/*
 *
 * Type and function definitions for the mpfc device
 *
 */

//
// This is the descriptor structure.
// This will be passed between your device driver and the emulator.
//
typedef struct {
  size_t size;     // How large is the buffer?

  void  *buffer;   // The buffer itself

  char owned;      // True => owned by hardware
                   // False => owned by driver
                   // Note: The device only writes the data when it owns
                   // the buffer, and uour driver should read the data
                   // only when it owns the buffer.

  char overflow;   // True => buffer wasn't big enough to
                   //   hold the full line device wanted to write.
                   //   You may have lost some data because of it.
} mpfc_desc;


//
// Register access
//

// First, the base register.  This holds the address of a linear array
// of descriptors.  Following functions read and write this base register
// values.
extern void *mpfc_read_base(void);
extern void mpfc_write_base(void *addr);

// The 'size' register holds the number of descriptors in the array.
// Following functions read and write a value into this register.
extern size_t mpfc_read_size();
extern void mpfc_write_size(size_t size);

// The control register is used to start the device, and also to
// enable interrupts.
//   Bit 0: set this to 1 to enable receive interrupts.
//   Bit 1: set this to 1 to enable interrupts when an overrun occurs
//          (i.e. when the device wants to output something and there
//          are no buffer descriptors for it to use).
//   Bit 2: set this to 1 to start the device running.
extern void mpfc_write_ctrl(uint32_t v);

// The status register shows the state of the hardware.
//   Bit 0: set when the device is 'running'
//   Bit 1: set when the device has run out of descriptors.
//   Bit 2: set when some buffer was not large enough to accept all the data.
//   Bit 3: set when a receive interrupt is pending
//   Bit 4: set when an overrun interrupt is pending
extern uint32_t mpfc_read_status();

// The status register can also be written to, but this will only
// clear the error and interrupt bits.  The actual value to be written
// is ignored.
extern void mpfc_write_status(uint32_t v);

//
// Start device emulation.  Always call this once as the first line of
// main().
//
extern void start_device_emulation();

//
// OS helper functions
//

// Calling this will cause your thread to go to sleep.  In a "real" OS
// this would switch to another thread to do something useful while
// waiting for the device.
extern void os_sleep();

// Call this to wake up your thread.  Typically, this will be called
// from an "interrupt" handler.
extern void os_wakeup();

// This registers a function which will be called when the device
// raises an interrupt.
extern void os_register_irq( void(*irq)(void) );

#endif //__DEVICE_H_INCLUDED

