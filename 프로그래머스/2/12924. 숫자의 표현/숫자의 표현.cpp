#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int Sum = 0;

    for(int i=1; i<n; i++)
    {
        Sum += i;
        
        for(int j=i+1; j<n; j++)
        {
            Sum+=j;
            
            if(Sum==n)
            {
                answer++;
            }
            else if(Sum > n)
            {
                Sum = 0;
                break;
            }
        }
    }
    
    return answer;
}