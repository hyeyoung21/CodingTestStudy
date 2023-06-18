#include <iostream>
using namespace std;
int main () {
    char line[30];

    cout << "숫자를 입력하세요" <<endl; //\n 
    cin.getline(line, sizeof(line));
    cout << "출력값은 = " << line << "입니다" <<endl;

    return 0;
}