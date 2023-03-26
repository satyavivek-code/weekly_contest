class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int result = 0;
        
        while(k > 0){
            if (numOnes > 0){
                result++;
                 numOnes--;
            }
            else if (numZeros > 0){
                numZeros--;
            }
            else if (numNegOnes > 0){
                result--;
                numNegOnes--;
            }
            k--;
        }
        return result;
    }
};
