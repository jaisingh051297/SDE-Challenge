#include <bits/stdc++.h>
using namespace std;

//Generating Entire Row of the pascal Triangle. 
vector<long long int> generateRow(int row){
  vector<long long int> ansRow; //For storing a element the pascal Triangle.
  long long int ans=1;
  ansRow.push_back(ans);
  for(int col=1;col<row;col++){
    ans=ans*(row-col);
    ans=ans*1/(col);
    ansRow.push_back(ans);
  }
  return ansRow;
}

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans; // Creating 2-D ArrayList
  vector<long long int> temp_ans;

  for(int i=1;i<=n;i++){
    temp_ans=generateRow(i); //Passing row no. to the Generate entire row Method.
    ans.push_back(temp_ans);
  }
   return ans;  
}
