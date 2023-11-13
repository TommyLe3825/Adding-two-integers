/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

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