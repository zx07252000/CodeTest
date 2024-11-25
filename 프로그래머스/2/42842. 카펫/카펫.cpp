#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int sum = brown+yellow;
    
    // 세로
    for(int i=3; i<=sqrt(sum); i++)
    {
        // 가로
        for(int j=3; j<=sum/i; j++)
        {
            if(i*j == sum && (i-2) * (j-2) == yellow)
            {
                answer.emplace_back(j);
                answer.emplace_back(i);
            }
        }
    }
    

    return answer;
}