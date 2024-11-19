#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool bFirst = false;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != ' ' && !bFirst)
        {
            s[i] = toupper(s[i]);
            
            bFirst = true;
        }
        else if(s[i] == ' ')
        {
            bFirst = false;
        }
        else if(bFirst)
        {
            s[i] = tolower(s[i]);
        }
    }
    
    answer = s;
    
    return answer;
}