#include <string>
#include <vector>

using namespace std;

int GetMinNum(int a, int b)
{
    int Result;
    
    while(1)
    {
        Result = a%b;
        
        if(Result == 0)
            return b;
        
        a = b;
        b = Result;
    }
}

int GetMaxNum(int a, int b)
{
    int MinNum = GetMinNum(a,b);
    
    return a*b/MinNum;
}

int solution(vector<int> arr) {
    int answer = arr[0];
    
    for(int i=1; i<arr.size(); i++)
    {
        answer = GetMaxNum(answer,arr[i]);
    }
    
    return answer;
}