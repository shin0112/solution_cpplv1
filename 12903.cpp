#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int n = s.size() / 2;
    if(s.size() % 2 == 0){
        answer = s[n - 1];
        answer += s [n];
    }
    else
        answer = s[n];
    return answer;
}