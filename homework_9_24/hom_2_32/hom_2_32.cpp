#include <iostream>
using namespace std;
int main() 
{
    int weight, height, bmi;
    cout << "請輸入體重 pounds：";
    cin >> weight;
    cout << "請輸入身高 inches：";
    cin >> height;
    bmi = (weight * 703) / (height * height);

    cout << "\n您的 BMI 值為：" << bmi << endl << endl;

    cout << "BMI VALUES (BMI 參考標準表)" << endl;
    cout << "Underweight:  less than 18.5" << endl;
    cout << "Normal:       between 18.5 and 24.9" << endl;
    cout << "Overweight:   between 25 and 29.9" << endl;
    cout << "Obese:        30 or greater" << endl;

    return 0;
}