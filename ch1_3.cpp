// 키보드로부터 2개의 숫자 값을 입력받은 뒤에 
// 두 값을 더한 후 출력하는 프로그램

#include <iostream>
using namespace std;

int main()
{
    // 선언
    int num1;
    int num2;
    int sum;
    // 입력받기
    cout << "첫번째 숫자 입력: ";
    cin >> num1;
    cout << "두번째 숫자 입력: ";
    cin >> num2;
    // 계산 결과 저장
    sum = num1 + num2;
    // 출력
    cout << "첫번재 숫자: " << num1 << " 두번째 숫자: " << num2 << " 두 숫자의 합: " << sum;
    return 0;
}