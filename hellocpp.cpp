#include <iostream>
using namespace std;
int main () {
    char line[30];

    cout << "���ڸ� �Է��ϼ���" <<endl; //\n 
    cin.getline(line, sizeof(line));
    cout << "��°��� = " << line << "�Դϴ�" <<endl;

    return 0;
}