#include <string>
#include <vector>
#include <stack>

using namespace std;

int GetOneCountFromBinary(int Num)
{
    int Result = 0;
    stack<int> StackNum;
    string Temp = "";
    
    while(Num != 0)
    {
        Temp += to_string(Num % 2);
        
        if(Num % 2 == 1)
        {
            Result++;
        }
        
        Num /= 2;
    }
    
    return Result;
}

int solution(int n) {
    int answer = 0;
    
    int BeforeCount = GetOneCountFromBinary(n);
    int CurrentCount = 0;
    
    while(CurrentCount != BeforeCount)
    {
        CurrentCount = GetOneCountFromBinary(n+1);
        
        n++;
    }
    
    answer = n;
    
    return answer;
}