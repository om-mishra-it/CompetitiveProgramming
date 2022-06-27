//Given a non-negative integer x, compute and return the square root of x.
//Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.
//Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

long long int findSquareRoot(int x) {
    int s = 0, e = x;
    long long int mid = s + (e-s)/2;
    long long int ans = 0;
    while(s <= e) {
        long long int sqr = mid*mid;
        if(sqr == x) return mid;
        if(sqr < x) {
            s = mid+1;
            ans = mid; // do not forget this line, otherwise you can get trapped in square(1) part
        }
        else e = mid-1;
        mid = s + (e-s)/2;
    }
    return ans;
}

double squareRootAfterDecimalPoint(int baseRootValue, int precision, int actualSquareNumber) {
    double factor = 1;
    double answer = baseRootValue;
    // loop until given precision is reached
    for(int i = 0; i < precision; i++)
        // loop until square of current decimal number j = 6.01 is less than actualSquareNumber
        for(double j = answer; j*j < actualSquareNumber; j += factor)
            // always save previous j value as answer because loop will stop as soon as j*j exceeds
            answer = j;
}