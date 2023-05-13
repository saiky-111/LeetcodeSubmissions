class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0; int left=0;
        int bottom=m-1; int right=n-1;
       while(left<=right && top<=bottom) {
       for(int i=left;i<=right;i++){
           ans.push_back(matrix[top][i]);
       }
        top++;
         for(int i=top;i<=bottom;i++){
           ans.push_back(matrix[i][right]);
       }
       right--;
      if(top<=bottom){//if we still have a row//if top is still under bottom
         for(int i=right;i>=left;i--){
           ans.push_back(matrix[bottom][i]);
         }
          bottom--;
       }
           if(left<=right){ //if we still have elements, fine, print the column// 
         for(int i=bottom;i>=top;i--){
           ans.push_back(matrix[i][left]);
       }
       left++;
        }
          
       }
         return ans;
    }
};