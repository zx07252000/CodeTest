#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> Command;
    
    for(int i=0; i<commands.size(); i++)
    {
        Command = commands[i];
        
        int FirstCommand    = Command[0]-1;
        int SecondCommand   = Command[1];
        int LastCommand     = Command[2]-1;
        
        vector<int> slice(array.begin() + FirstCommand , array.begin() + SecondCommand);
        
        sort(slice.begin(),slice.end());
        
        answer.emplace_back(slice[LastCommand]);
    }
    
    
    return answer;
}