// push_back or make the [] the existence of subscripts
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> base(1,1);
        vector<vector<int>> Pascal(numRows, base);
        for(int i=1; i<numRows; i++){
            for(int j=1; j<i; j++){
                Pascal[i].push_back(Pascal[i-1][j-1] + Pascal[i-1][j]);
            }
            Pascal[i][i] = 1;
        }
        return Pascal;
        
        
    }
};
