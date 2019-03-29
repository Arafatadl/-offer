//
// Created by Arafat on 2019/1/12.
//
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int maxProfit=0;
        vector<int>::iterator i;
        for (i=prices.begin()+1; i < prices.end(); i++) {
            if(*i>*(i-1))
                maxProfit+=*i-*(i-1);
        }
        return maxProfit;
    }
};
