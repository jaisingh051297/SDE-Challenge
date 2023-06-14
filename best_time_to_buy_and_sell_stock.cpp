#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    int size=prices.size();
    int min_price=INT_MAX;
    int max_profit = 0;

    for(int i=0;i<size;i++){
        // calculating minimum price
    if(min_price>prices[i]) min_price=prices[i];
       // calculating maximum price
    if(max_profit<prices[i]-min_price) max_profit=prices[i]-min_price;
    }

    return max_profit;
}