#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    for (auto x : numbers){
        int count = 0;
        for(int i = 0; i < 10; i++){
            if(x == i){
                ++count;
            }
        }
        if(count == 1){
            answer -= x;
        }
    }
    return answer;
}