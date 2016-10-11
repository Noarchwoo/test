class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> kpa(rowIndex + 1);
        kpa[0] = 1;
        for(int i = 1; i < rowIndex + 1; i++){
            for(int j = i; j > 0; j-- ){
                kpa[j] += kpa[j-1];
            }
        }
        return kpa;
        
    }
};
