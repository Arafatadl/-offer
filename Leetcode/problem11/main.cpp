#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string reverseString(string s){
        int i=0,j=s.size()-1;
        while (i<j){
            if(s[i])
            swap(s[i++],s[j++]);
        }
        return s;
    }
};



int main(){
    return 0;
}