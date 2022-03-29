class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);// jagged array -> matrix-5 rows

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1); // 0 -> 1, 1-> 2
            r[i][0] = r[i][i] = 1; //  col==0, col->last col ==row ==>1
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j]; // row-1. col-1 + row-1 col
        }
        
        return r;
    }
};