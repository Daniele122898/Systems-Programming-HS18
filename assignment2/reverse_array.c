#include <stdio.h>

void reverse_array(int arr[], int length) {
    int n = length-1;
    for (int i=0; i<length; i++) {
        if (i>=n-i) break;
        int toSwap = arr[n-i];
        arr[n-i] = arr[i];
        arr[i] = toSwap;
    }
}

void print_array(int arr[], int length) {
    for (int i=0; i<length; i++) {
        printf("%d, ",arr[i]);
    }
    printf("\n");
}

int main(int argc, char** argv) {
    int length = 4;
    int arr[4] = {1,2,3,4};
    printf("Array before reversing: \n");
    print_array(arr, length);
    
    reverse_array(arr, length);
    printf("Array after reversing: \n");
    print_array(arr, length);
}