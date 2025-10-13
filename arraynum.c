#include <stdio.h>

int removeDuplicates(int nums[], int numsSize) {
   
    if (numsSize == 0)
        return 0;
    int k = 1; 
    for (int i = 1; i < numsSize; i++) {
     
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];  
            k++;                 
        }
    }
    return k;
}
void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]\n");
}

int main() {
    int nums1[] = {1, 1, 2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int k1 = removeDuplicates(nums1, size1);
    printf("Example 1 Output:\n");
    printf("Unique Count (k) = %d\n", k1);
    printf("Modified Array = ");
    printArray(nums1, size1);  

    int nums2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int k2 = removeDuplicates(nums2, size2);
    printf("\nExample 2 Output:\n");
    printf("Unique Count (k) = %d\n", k2);
    printf("Modified Array = ");
    printArray(nums2, size2);  

    return 0;
}
