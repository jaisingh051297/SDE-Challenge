#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{   
	if (matrix.size()==0) return;
    int Length_of_row = matrix.size(); // Number of row
    int Lenght_of_col = matrix[0].size(); // Number of colom

	int row[Length_of_row]={0}; //initializing all row with zero
	int col[Lenght_of_col]={0}; //initializing all colom with zero

	for(int i=0;i<Length_of_row;i++){
		for(int j=0;j<Lenght_of_col;j++){
			if(matrix[i][j]==0){
				row[i]=1; // set ith row with 1;
				col[j]=1; // set jth colom with 1;
			}
		}
	}

	for(int i=0;i<Length_of_row;i++){
		for(int j=0;j<Lenght_of_col;j++){
			if(row[i]==1 || col[j]==1){
				matrix[i][j]=0; // set all ith row and jth colom with zero;
			}
		}
	}

}