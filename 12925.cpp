#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string num = s;
    vector<int> v {0};
    if (s[0] == '-' || s[0] == '+')
        num = s.substr(1,s.size()-1);
    for (int i = 0; i < num.size(); i++)
        v.push_back(static_cast<int>(num[i])-48);
    for (int i = 0, j = 0; i < v.size(); i++, j++){
        int tnum = 1;
        for (int n = 0; n + 1 < v.size() - i; n++)
            tnum *= 10;
        answer += v[i] * tnum;
    }
    if (s[0] == '-')
        answer = -answer;
    return answer;
}