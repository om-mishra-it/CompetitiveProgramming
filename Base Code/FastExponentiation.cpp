// 2^10 can be written as (2^(10/2)^2 = (2^5)^2                 if power is even, divide power by 2, then whole power 2
// 2^11 can be written as (2^(11/2))^2 * 2 = (2^5)^2 * 2        if power is odd, divide power by 2, then whole power 2, then multiply base once more

int fastExponent(int base, int pow) {
    while(pow > 0) {
        // checking power is odd or not
        if(pow & 1) {

        }
    }
}