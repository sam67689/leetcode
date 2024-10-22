int mySqrt(int x) {
    if (x == 1 || x == 0)
        return x;

    int left  = 1;
    int right = x - 1;
    int mid;
    int result = 0;

    while (left <= right){
        mid = (left + right) / 2;

        if (mid == mid / x) {
            return mid;
        } else if (mid > x / mid) {
            right = mid - 1;
        } else {
            left = mid + 1;
            result = mid;
        }
    }
    
    return result;
}