#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> Ranking;
    
    for(int i=0; i<score.size(); i++)
    {
        Ranking.emplace_back(score[i]);
        sort(Ranking.begin(),Ranking.end(),greater<int>());
        
        vector<int> Slice(Ranking.begin(), Ranking.begin()+k);
        
        Ranking = Ranking.size() > k ? Slice : Ranking;
        
        int MinNum = *min_element(Ranking.begin(),Ranking.end());
        answer.emplace_back(MinNum);
    }
    
    
    return answer;
}