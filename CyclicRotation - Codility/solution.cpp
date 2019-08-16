#include <vector>

using std::vector;

vector<int> solution(vector<int> &A, int K) {
        vector<int> temp;
        for(int k = 0; k < K; k++) {
                temp = A;
                for(int i = 0; i < A.size(); i++) {
                        if(i == A.size() - 1)
                                A[0] = temp[A.size() - 1];
                        else
                                A[i + 1] = temp[i];
                }
        }
        return A;
}
