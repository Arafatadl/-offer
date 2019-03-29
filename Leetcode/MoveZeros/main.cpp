#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution1{
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> vec;

        for (int num : nums) {
            if(num)
                vec.push_back(num);
        }
        for (int i = vec.size(); i <nums.size() ; ++i) {
            vec.push_back(0);
        }
        vec=nums;

    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int k=0;
        for (int i = 0; i <nums.size() ; ++i) {
            if(nums[i])
                swap(nums[k++],nums[i]);
        }

    }
};
int main() {
    
    
    return 0;
}