#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(size(arr)==1){
        answer.push_back(-1);
        return answer;
    }
    else{
        arr.erase(min_element(arr.begin(), arr.end()));
        answer = arr;
        return answer;
    }
}


