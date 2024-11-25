#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> St;
    
    for(int i=0; i<s.size(); i++)
    {
        if(St.empty() || St.top() != s[i])
        {
            St.push(s[i]);
        }
        else if(St.top() == s[i])
        {
            St.pop();
        }
    }
    
    answer = St.empty() ? 1 : 0;
    
    return answer;
}