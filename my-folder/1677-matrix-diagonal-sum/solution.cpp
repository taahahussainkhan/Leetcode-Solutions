class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int c = mat.size() , r = mat[0].size(), sum = 0;
        for(int i = 0 ; i < c ; i++)
            for(int j = 0 ; j < r ; j++)
                if (i == j || i + j == c - 1)
                    sum += mat[i][j];

        return sum;
    }
};
