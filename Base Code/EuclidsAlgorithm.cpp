// Recursive
int EuclidsAlgorithm(int a, int b) {
    if(!a) return b; // if a becomes 0, that means b completely divides a
    if(!b) return a; // if b becomes 0, that means b completely divides b
    if(a == b) return a; // if both are equal, that means both completely divide each other

    if(a > b) EuclidsAlgorithm(a-b, b); // if a is greater than b, reduce a
    else EuclidsAlgorithm(a, b-a); // if b is greater than a, reduce b
}

// Iterative
int EuclidsAlgorithm(int a, int b) {
    if(!a) return b; // if a becomes 0, that means b completely divides a
    if(!b) return a; // if b becomes 0, that means b completely divides b
    if(a == b) return a; // if both are equal, that means both completely divide each other

    while(a != b) {
        if(a > b) a -= b; // reduce a
        if(b > a) b -= a; // reduce b
    }
}