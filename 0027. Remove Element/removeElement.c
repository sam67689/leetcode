int removeElement(int* nums, int numsSize, int val) {
    int i = 0, k = 0;

    for (i = 0; i < numsSize; i++) {
        if(nums[i] != val) nums[k++] = nums[i];
    }

    return k;
}