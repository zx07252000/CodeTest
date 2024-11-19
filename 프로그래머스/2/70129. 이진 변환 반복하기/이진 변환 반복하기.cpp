#include <string>
#include <vector>
#include <iostream>

using namespace std;

string ConvertToNum(int Num, int& Count)
{
    string Result = "";
    
    while(Num != 0)
    {
        Result += to_string(Num % 2);
        
        Num = Num / 2;
    }
    
    Count++;
    
    return Result;
}

vector<int> solution(string s) {
    vector<int> answer;
    
    int ZeroCount = 0;
    int OneCount  = 0;
    
    int ZeroResult = 0;
    int ChangeCount = 0; 
    
    while(s != "1")
    { 
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '0')
            {
                ZeroCount++;
            }
            else
            {
                OneCount++;
            }
        }
        
        ZeroResult += ZeroCount;
        
        s = ConvertToNum(OneCount, ChangeCount);
        
        OneCount  = 0;
        ZeroCount = 0;
    }
    
    answer.emplace_back(ChangeCount);
    answer.emplace_back(ZeroResult);
   
    return answer;
}