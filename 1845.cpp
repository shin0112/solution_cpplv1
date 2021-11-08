#include <vector>
using namespace std;

int solution(vector<int> nums){
    int answer = 0, count;
    vector<int> v;
    for (int i = 0; i < nums.size(); i++){
        v.push_back(nums[i]);
        for (int j = 0; j < v.size(); j++)
            if (v[v.size() - 1] == v[j - 1])
                v.pop_back();
    }
    count = v.size();
    if (v.size() <= nums.size() / 2 || v.size() == 1)
        answer = v.size();
    else if (v.size() > nums.size() / 2)
        answer = nums.size() / 2;
    return answer;
}
