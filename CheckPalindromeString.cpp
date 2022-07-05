//You are given a string 'S'. Your task is to check whether the string is palindrome or not.
//For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.
//Test Case: [ignore symbols and whitespaces]
//2
//N2 i&nJA?a& jnI2n
//A1b22Ba

bool checkPalindrome(string st) {
    int size = st.size();
    vector<char> check; // vector to store only lower alphabets and digits
    for(int i = 0; i < size; i++) {
        if(isalpha(st[i])) check.push_back(tolower(st[i])); // lower the alphabets and store into vector
        if(isdigit(st[i])) check.push_back(st[i]); // store digits into vector
    }
    int s = 0; // set to starting of vector check
    int e = check.size()-1; // set to ending of vector check
    while(s <= e) if(check[s++] != check[e--]) return false; // using 2-pointer approach check 's' and 'e'
    return true; //
}