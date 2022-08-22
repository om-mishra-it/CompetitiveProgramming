// 2^10 can be written as (2^(10/2)^2 = (2^5)^2                 if power is even, divide power by 2, then whole power 2
// 2^11 can be written as (2^(11/2))^2 * 2 = (2^5)^2 * 2        if power is odd, divide power by 2, then whole power 2, then multiply base once more
// given base, power and modValue to keep in range

int fastExponent(int base, int power, int modValue) {
    int result = 1;
    while(power > 0) {
        // checking power is odd or not
        if(power & 1) {
            result = (1LL * result * (base % modValue)) % modValue; // multiply 1LL to typecast the result into long long int
        }
        base = (1LL * (base % modValue) * (base % modValue)) % modValue;
        power = power >> 1; // dividing power by 2 (i.e. shifting one bit rightwards)
    }
    return result;
}