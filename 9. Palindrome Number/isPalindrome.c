bool isPalindrome(int x) {
    if (x < 0) return false;
    
    int p = 0;
    int x_bak = x;

    while (x > 0) {
        if (p > INT_MAX / 10) return false;

        p = p*10 + x % 10;
        x = x / 10;
    }
    return p == x_bak;
}