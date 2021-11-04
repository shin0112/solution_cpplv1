#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer(2);
    int x = 0, y = 0;
    for (auto v1 : lottos){
        int count = 0;
        if (v1 == 0)
            count++;
        for (auto v2 : win_nums){
            if (v1 == v2){
                count++;
                break;
            }
        }
        if(count == 1)
            x++;
    }
    for (auto v1 : lottos){
        int count = 0;
        for (auto v2 : win_nums){
            if (v1 == v2){
                count++;
                break;
            }
        }
        if(count == 1)
            y++;
    }
    if (x != 0)
        answer[0] = 7 - x;
    else
        answer[0] = 6;       
    if (y != 0)
        answer[1] = 7 - y;
    else
        answer[1] = 6;
    return answer;
}