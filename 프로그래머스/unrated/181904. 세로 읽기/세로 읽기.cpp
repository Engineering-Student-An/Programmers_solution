#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    for(int i=0;i<size(my_string);i++){
        if(i%m==c-1) answer+=my_string[i];
    }
    return answer;
}