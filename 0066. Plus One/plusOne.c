int* plusOne(int* digits, int digitsSize, int* returnSize){
    int carrier = 1;
    int i;
    int *ret;

    for (i = digitsSize - 1; i >= 0; --i){
        digits[i] = digits[i] + carrier;
        carrier = digits[i] / 10;
        digits[i] = digits[i] % 10;
    }

    if (carrier == 0) {
        return digits;
    }

    *returnSize = digitsSize + 1;
    ret = malloc((*returnSize * sizeof(int)));

    ret[0] = 1;
    for (i = 1; i < *returnSize; i++) {
        ret[i] = digits[i - 1]; 
    }

    return ret;
}