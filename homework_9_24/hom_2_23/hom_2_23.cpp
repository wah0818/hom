#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cout << "請輸入三個整數：";
    cin >> num1 >> num2 >> num3;
    int largest = num1;
    int smallest = num1;
    //一一對比找最大
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    //--------------------
    //找最小
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    cout << "Max：" << largest << endl;
    cout << "min：" << smallest << endl;

    return 0;
}