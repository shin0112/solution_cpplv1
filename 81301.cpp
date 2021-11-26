#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;
    string num = "";
    for(int i = 0; s.size() > i; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            num += s[i];
        }
        else{
            if(s[i] == 'z' && s[i+1] == 'e')
            num += '0';
            else if(s[i] == 'o' && s[i+1] == 'n')
            num += '1';
            else if(s[i] == 't' && s[i+1] == 'w')
            num += '2';
            else if(s[i] == 't' && s[i+1] == 'h')
            num += '3';
            else if(s[i] == 'f' && s[i+1] == 'o')
            num += '4';
            else if(s[i] == 'f' && s[i+1] == 'i')
            num += '5';
            else if(s[i] == 's' && s[i+1] == 'i')
            num += '6';
            else if(s[i] == 's' && s[i+1] == 'e')
            num += '7';
            else if(s[i] == 'e' && s[i+1] == 'i')
            num += '8';
            else if(s[i] == 'n' && s[i+1] == 'i')
            num += '9';
        }
    }
    for (int i = 0, j = 0; i < num.size(); i++, j++){
        int cnt = 1;
        for(int n = 0; n < num.size() - i -1 ; n++)
            cnt *= 10;
        answer += (static_cast<int>(num[j])-48) * cnt;
    }
    return answer;
}