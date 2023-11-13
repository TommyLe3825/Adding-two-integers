#include <iostream> //cout and cin
#include <string> //needed to use string

using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main()
{
    int num1;
    int num2;
    Solution answer; //instance of the class
    
    cout << "Give me two numbers to add together" << endl;
    cin >> num1;
    cin >> num2;
    
    //using the instance of the class to use sum
    cout << answer.sum(num1,num2);
    
    // auto solution = std::to_string(answer.sum);
    // cout << answer.sum;

    return 0;
}
