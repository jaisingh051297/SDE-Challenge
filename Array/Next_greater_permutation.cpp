#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int break_point=-1;
    //Step 1, find break point ,where the value get started falling.
    for(int i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            break_point=i;
            break;
        }
    }

     //Step 2, if break Point is not exit.

    if(break_point==-1){
        //Reverse the whole values 
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }

     //Step 2, if break point is exit, then swap the value with just larger value.

    for(int i=n-1;i>break_point;i--){
        if(permutation[break_point]<permutation[i]){
           swap(permutation[break_point],permutation[i]);
            break;
        }
    }

    //step 3, After swaping , the reverse the remaining values of their right. 
    reverse(permutation.begin()+break_point+1,permutation.end());

    return permutation;


}