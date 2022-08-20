// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
// Return the answer in any order.
//
// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 0 and 1 does not map to any letters.

//    Input: digits = "23"
//    Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

void solve(string digits, string output, vector<string>& ans, int index, string mapping[]) {
    // base case
    if(index >= digits.length()) {
        ans.push_back(output);
        return;
    }
    // int number = digit[index] - '0';
    string value = mapping[digits[index] - '0'];

    for(int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);
        solve(digits, output, ans, index+1, mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    if(!digits.size()) return vector<string>{};
    vector<string> ans;
    string mapping[] = {"", "", "abc", "def",
                        "ghi", "jkl", "mno",
                        "pqrs", "tuv", "wxyz"};
    string output = "";
    solve(digits, output, ans, 0, mapping);
    return ans;
}