/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
Example 1:

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 
Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1 */


//Solution
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
void setZeroes(vector<vector<int>> &matrix)
{
	int col=1,r=matrix.size(),c=matrix[0].size();
    for(int i=0;i<r;i++){
        if(matrix[i][0]==0)col=0;
        for(int j=1;j<c;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=1;j--){
            if(matrix[i][0]==0||matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
            if(col==0){
                matrix[i][0]=0;
            }
        }
    }
//main function
int main() {
  vector < vector < int >> matrix;
  int num_row,num_col;
  cin>>num_row>>num_col;
  for(int i=0;i<num_row;i++){
  	vector<int>temp;
  	for(int j=0;j<num_col;j++){
  		 int input=0;
		  cin>>input;
  		temp.push_back(input);
	  }
	  
	  matrix.push_back(temp);
  }
  //matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(matrix);
  cout<<"The Final Matrix is "<<endl;
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[0].size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
}
