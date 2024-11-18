#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<int> List;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(')
        {
            List.push(1);
        }
        else if(true==List.empty())
        {
            answer = false;
            break;
        }
        else
        {
            List.pop();
        }
    }
    
    if(answer)
    {
        answer = List.empty();
    }
    

    return answer;
}