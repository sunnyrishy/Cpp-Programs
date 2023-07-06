Problem Link :  https://leetcode.com/problems/spiral-matrix/


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();

        int sr = 0, er = m-1, sc = 0, ec = n-1; // start row, end row, start column, end column
        int count = 0;

        while(sr <= er && sc <= ec){
            //print first row
            for(int i = sc; i <= ec; i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            if(count == m*n) {
                return ans;
            }
            // print end column
            for(int j = sr; j <= er; j++){
                ans.push_back(matrix[j][ec]);
                count++;
            }
            ec--;
            if(count == m*n) {
                return ans;
            }

            //print end row in reverse order
            for(int i = ec; i >= sc; i--){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            if(count == m*n) {
                return ans;
            }

            //print start column in reverse order
            for(int j = er; j >= sr; j--){
                ans.push_back(matrix[j][sc]);
                count++;
            }
            sc++;
            if(count == m*n) {
                return ans;
            }
        }
        return ans;
    }
};
