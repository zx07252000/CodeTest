#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

bool cmp(const pair<string,char>& a, const pair<string,char>& b)
{
    if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    map<string,char> OneCharList;

    for(int i=0; i<strings.size(); i++)
    {
        char OneChar = strings[i][n];
        
        OneCharList.insert(pair<string,char>(strings[i],OneChar));
    }
    
    vector<pair<string,char>> vec( OneCharList.begin(), OneCharList.end() );
	sort(vec.begin(), vec.end(), cmp);
    
    for(auto iter : vec)
    {
        answer.emplace_back(iter.first);
    }
    
    return answer;
}