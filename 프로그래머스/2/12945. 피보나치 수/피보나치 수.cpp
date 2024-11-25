#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> vec;
    vec.reserve(1000001);
    
    vec[0]=0;
    vec[1]=1;
    
    for(int i=2;i<=n;i++){
        vec[i] = (vec[i-2]+vec[i-1])%1234567;
    }
    
    answer = vec[n];
    
    return answer;
}