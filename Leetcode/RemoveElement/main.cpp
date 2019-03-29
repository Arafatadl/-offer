#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        vector<int>::iterator itor;
        for (itor= nums.begin(); itor!=nums.end() ;itor++) {
           if(*itor==*(itor+1)&&*itor==*(itor+2)) {
               itor=nums.erase(itor+3);
               itor=(itor-3);
           }
        }
        return nums.size();
    }
};
int main() {

        vector<int> vec;
        vec.push_back(1);
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);

        Solution::removeDuplicates(vec);

        return 0;
};
