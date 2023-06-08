class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row_size = matrix.size();
        int col_size = matrix[0].size();
        vector<int> row_indexes;
        vector<int> col_indexes;
        for(int i=0; i<row_size;i++){
            for(int j=0; j<col_size;j++){
                if(matrix[i][j]==0){
                    row_indexes.push_back(i);
                    col_indexes.push_back(j);
                }
            }
        }
        for(int i =0;i<row_indexes.size();i++){
            int row_index=row_indexes[i];
            int col_index=col_indexes[i];
            for(int k = 0;k<col_size;k++){
                matrix[row_index][k]=0;
            }
                    
            for(int k = 0;k<row_size;k++){
                matrix[k][col_index]=0;
            }
        }
    }
};
