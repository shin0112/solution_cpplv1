#include <string>
#include <vector>

using namespace std;

int Func(int x){
    int count = 0;
    for (int i = 1; i <= x; i++){
        if(x % i == 0)
            count++;
    }
    return count;
}
int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; i++){
        if(Func(i) % 2 == 0){
            answer += i;
        }
        else
            answer -= i;
    }
    return answer;
}