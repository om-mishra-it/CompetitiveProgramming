// Compress given character array "aaabbcdd" to "a3b2cd2" in same vector and return size of new vector
int compressString(vector<char> s) {
    int i = 0; // pointer to iterate over each character of array
    int n = s.size(); // last limit of iteration
    int putIndex = 0; // placeholder to put compressed values
    while(i < n) {
        int j = i + 1; // first alphabet 'i' taken into consideration and 'j' starts checking from very next element
        // move j ahead until character is same as first alphabet at 'i'
        while(j < n && s[i] == s[j]) {
            j++;
        }
        s[putIndex++] = s[i]; // putting 'i'th element into vector and moving putIndex pointer ahead
        int count = j - i; // count of alphabet is distance between i and j pointers
        // when count is 1 we don't need to compress it
        if(count > 1) {
            string stringFormatOfCount = to_string(count); // convert int(145) to "145"
            // loop over stringFormatOfCount and append each digit individually '1' then '4' then '5'
            for(char c: stringFormatOfCount) s[putIndex++] = c;
        }
        i = j; // update 'i' to next alphabet which starts from 'j'
    }
    return putIndex; // putIndex is the new size of compressed array
}