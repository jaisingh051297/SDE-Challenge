#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
     
    long long int sum=0, Max_sum=LONG_MIN; // Minimum possible value;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(Max_sum<sum) Max_sum=sum;
        if(sum<0) sum=0;
    }
    if(Max_sum<0) return 0;

    return Max_sum;
}