#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    int Length_of_row = matrix.size();
    int Lenght_of_col = matrix[0].size();

	int row[Length_of_row]={0};
	int col[Lenght_of_col]={0};

	for(int i=0;i<Length_of_row;i++){
		for(int j=0;j<Lenght_of_col;j++){
			if(matrix[i][j]==0){
				row[i]=1;
				col[j]=1;
			}
		}
	}

	for(int i=0;i<Length_of_row;i++){
		for(int j=0;j<Lenght_of_col;j++){
			if(row[i]==1 || col[j]==1){
				matrix[i][j]=0;
			}
		}
	}

}