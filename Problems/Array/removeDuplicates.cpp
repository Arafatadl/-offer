//
// Created by Arafat on 2019/1/12.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static int removeDuplicates(vector<int> &nums) {
        if(nums.size()==0)
            return 0;
        vector<int>::iterator cur;
        cur=nums.begin();
        while(cur!=nums.end()-1){
            if(*cur==*(cur+1)){
                cur=nums.erase(cur);
            } else
                cur++;
        }
        return int(nums.size());
    }
};
