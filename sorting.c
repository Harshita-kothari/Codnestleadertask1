#include <stdio.h>


void merge(int nums1[], int m, int nums2[], int n) {
    int i = m - 1;      
    int j = n - 1;
    int k = m + n - 1;   

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
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
   
    int nums1_1[6] = {1, 2, 3, 0, 0, 0};
    int nums2_1[3] = {2, 5, 6};
    int m1 = 3, n1 = 3;
    merge(nums1_1, m1, nums2_1, n1);
    printf(" 1 Output: ");
    printArray(nums1_1, m1 + n1);

  
    int nums1_2[1] = {1};
    int nums2_2[1] = {}; 
    int m2 = 1, n2 = 0;
    merge(nums1_2, m2, nums2_2, n2);
    printf(" 2 Output: ");
    printArray(nums1_2, m2 + n2);


    int nums1_3[1] = {0};
    int nums2_3[1] = {1};
    int m3 = 0, n3 = 1;
    merge(nums1_3, m3, nums2_3, n3);
    printf("3 Output: ");
    printArray(nums1_3, m3 + n3);

    return 0;
}
