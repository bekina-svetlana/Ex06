#include <iostream>
#include "Prime.h"

using namespace std;



int main()
{
	Prime num1, num2;
	num1.setValue(2);
	num2 = num1.nextPrime(); // � num2 ��������������� 3
	bool result = num1.checkPrime(17); // true
	cout << "result " << result << endl;
	num2.setValue(17); // � num2 ������������� 17
	int count = num2.countBetween(num1); // count = 5
	cout << "count " << count << endl;
	bool ans = num2.isValid(); //true
	cout << "ans " << ans << endl;
}
