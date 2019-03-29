#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <string>
#include <queue>
using namespace std;



class Solution {
private:
    string letterMap[10] = {
            " ",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
    };

    void findCombination(const string &digits , int index , const string &s){

        char c = digits[index];

        string letters = letterMap[c-'0'];
        for (int i = 0; i <letters.size(); ++i) {
            findCombination(digits,index+1,s+letters[i])
        }


    }
public:
    vector<string> letterCombinations(string digits) {

    }




};







int main(){
    bool tr;
    tr=8<8;
    cout<<tr;
}
