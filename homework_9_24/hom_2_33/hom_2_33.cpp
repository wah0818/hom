#include <iostream>

using namespace std;

int main() {
    int totalMiles;       // 一整天的總里程數
    int costPerGallon;    // 汽油一公升/加侖多少錢
    int milesPerGallon;   // 平均一公升/加侖能行駛多少公里
    int parkingFees;      // 一天的停車費
    int tolls;            // 一天的通行費(過路費)

    cout << "請輸入一整天的總里程數：";
    cin >> totalMiles;

    cout << "請輸入汽油一公升/加侖多少錢：";
    cin >> costPerGallon;

    cout << "請輸入平均一公升/加侖能行駛多少公里：";
    cin >> milesPerGallon;

    cout << "請輸入一天的停車費：";
    cin >> parkingFees;

    cout << "請輸入一天的通行費(過路費)：";
    cin >> tolls;

    int dailyGasCost = (totalMiles / milesPerGallon) * costPerGallon;

    int totalDailyCost = dailyGasCost + parkingFees + tolls;

    cout << "\n您一天開車去工作的總花費為：" << totalDailyCost << " 元" << endl;

    return 0;
}