#include <string>
#include <vector>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int distancel = 0, distancer = 0, right = -1, left = -1;
    for(int i = 0; i < numbers.size(); i++){
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7){
            answer += "L";
            left = (int)numbers[i];
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9){
            answer += "R";
            right = numbers[i];
        }
        else{ 
            if(numbers[i] == 2) {
                if (left == -1) {distancel = 4;}
                else if (left == 1) {distancel = 1;}
                else if (left == 4) {distancel = 2;}
                else if (left == 7) {distancel = 3;}
                else if (left == 2) {distancel = 0;}
                else if (left == 5) {distancel = 1;}
                else if (left == 8) {distancel = 2;}
                else if (left == 0) {distancel = 3;}
                if (right == -1) {distancer = 4;}
                else if (right == 3) {distancer = 1;}
                else if (right == 6) {distancer = 2;}
                else if (right == 9) {distancer = 3;}
                else if (right == 2) {distancer = 0;}
                else if (right == 5) {distancer = 1;}
                else if (right == 8) {distancer = 2;}
                else if (right == 0) {distancer = 3;}
            }
            else if (numbers[i] == 5) {
                if (left == -1) {distancel = 3;}
                else if (left == 1) {distancel = 2;}
                else if (left == 4) {distancel = 1;}
                else if (left == 7) {distancel = 2;}
                else if (left == 2) {distancel = 1;}
                else if (left == 5) {distancel = 0;}
                else if (left == 8) {distancel = 1;}
                else if (left == 0) {distancel = 2;}
                if (right == -1) {distancer = 3;}
                else if (right == 3) {distancer = 2;}
                else if (right == 6) {distancer = 1;}
                else if (right == 9) {distancer = 2;}
                else if (right == 2) {distancer = 1;}
                else if (right == 5) {distancer = 0;}
                else if (right == 8) {distancer = 1;}
                else if (right == 0) {distancer = 2;}
            }
            else if (numbers[i] == 8){
                if (left == -1) {distancel = 2;}
                else if (left == 1) {distancel = 3;}
                else if (left == 4) {distancel = 2;}
                else if (left == 7) {distancel = 1;}
                else if (left == 2) {distancel = 2;}
                else if (left == 5) {distancel = 1;}
                else if (left == 8) {distancel = 0;}
                else if (left == 0) {distancel = 1;}
                if (right == -1) {distancer = 2;}
                else if (right == 3) {distancer = 3;}
                else if (right == 6) {distancer = 2;}
                else if (right == 9) {distancer = 1;}
                else if (right == 2) {distancer = 2;}
                else if (right == 5) {distancer = 1;}
                else if (right == 8) {distancer = 0;}
                else if (right == 0) {distancer = 1;}
            }
            else if (numbers[i] == 0) {
                if (left == -1) {distancel = 1;}
                else if (left == 1) {distancel = 4;}
                else if (left == 4) {distancel = 3;}
                else if (left == 7) {distancel = 2;}
                else if (left == 2) {distancel = 3;}
                else if (left == 5) {distancel = 2;}
                else if (left == 8) {distancel = 1;}
                else if (left == 0) {distancel = 0;}
                if (right == -1) {distancer = 1;}
                else if (right == 3) {distancer = 4;}
                else if (right == 6) {distancer = 3;}
                else if (right == 9) {distancer = 2;}
                else if (right == 2) {distancer = 3;}
                else if (right == 5) {distancer = 2;}
                else if (right == 8) {distancer = 1;}
                else if (right == 0) {distancer = 0;}
            }
            if (hand == "right"){
                if (distancel < distancer){
                    answer += "L";
                    left = numbers[i];
                }
                else {
                    answer += "R";
                    right = numbers[i];
                }
            }
            else {
                if (distancel <= distancer){
                    answer += "L";
                    left = numbers[i];
                }
                else {
                    answer += "R";
                    right = numbers[i];
                }
            }
        }
    }
    return answer;
}