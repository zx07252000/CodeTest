#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    int Size = A.size();
    
    sort(A.rbegin(),A.rend());
    sort(B.begin(),B.end());
    
    for(int i=0; i<Size; i++)
    {
        answer += A[i]*B[i];
    }
    
    return answer;
}