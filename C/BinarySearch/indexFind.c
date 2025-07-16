#include <stdio.h>
#include <stdlib.h>


int binarySearch(int arr[], int low, int high, int x){
    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == x)
            return mid;

        if(arr[mid] < x){
            low = mid + 1;
        }
        else {
            high = mid-1;
        }

    }
    return -1;
}

int moddedBinarySearch(int arr[], int low, int high, int x){
    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == x)
            return mid;

        if(arr[mid] < x){
            low = mid + 1;
        }
        else {
            high = mid-1;
        }

    }
    return low;
}

int searchInsert(int* nums, int numsSize, int target) {
    int low_range = -1;
    int result = moddedBinarySearch(nums, 0, numsSize - 1, target);
    return result;
}