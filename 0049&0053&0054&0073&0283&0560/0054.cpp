class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty()) return ans;

        int m = matrix.size();
        int n = matrix[0].size();
        
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        while (true) {
            for (int j = left; j <= right; j++) ans.push_back(matrix[top][j]);
            if (++top > bottom) break;

            for (int i = top; i <= bottom; i++) ans.push_back(matrix[i][right]);
            if (--right < left) break;

            for (int j = right; j >= left; j--) ans.push_back(matrix[bottom][j]);
            if (--bottom < top) break;

            for (int i = bottom; i >= top; i--) ans.push_back(matrix[i][left]);
            if (++left > right) break;
        }

        return ans;
    }
};