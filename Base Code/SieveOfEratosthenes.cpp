// used to remove the multiples of a number
vector<int> sievedVector(int n) {
    vector<bool> sieve (n+1, true); // initialized a vector with all values true up to n+1
    vector<int> prime;
    sieve[0] = sieve[1] = false; // number 0 and number 1 are not prime
    for(int i = 2; i < n; i++) {
        if(sieve[i]) prime.push_back(i); // if current position of sieve is true then it is prime
        // now calculating the table of the number (starting from *2) and marking all the multiples as false
        // this is Sieve of Eratosthenes. We fetch a prime and remove all their multiples
        // therefore we do not need to run this below for-loop for every instance
        for(int j = 2 * i; j < n; j += i) {
            sieve[j] = false;
        }
    }
    return prime;
}