class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        int i, sum = 0, len = A.size();
        int *F = new int[len];
        F[0] = 0;
        for(i = 0; i < len; i++){
            sum += A[i];
            F[0] += i * A[i];
        }
        for(i = 1; i < len; i++){
            F[i] = F[i-1] - sum + len * A[i-1];
        }
        int max = F[0];
        for(i = 1; i < len; i++){
            if( F[i] > max){
                max = F[i];
            }
        }
        return max;
        
    }
};
