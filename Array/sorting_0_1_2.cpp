#include <bits/stdc++.h> 

using namespace std;

void sort012(int *arr, int n)
{
   // counting no of 0, 1,2
   int count_0=0,count_1=0,count_2=0; 

   for(int i=0;i<n;i++){
      if(arr[i]==0) count_0++;
      else if(arr[i]==1) count_1++;
      else if(arr[i]==2) count_2++;
   }
   
   for(int i=0;i<n;i++){

      if(count_0>0){
         arr[i]=0;
         count_0--;
      }
      else if(count_1>0){
         arr[i]=1;
         count_1--;
      }
      else if(count_2>0){
         arr[i]=2;
         count_2--;
      }
   }

}