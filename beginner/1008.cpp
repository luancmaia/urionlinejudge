#include <iostream>
using namespace std;

int main() {
	int number, hours;
	double perHour, salary;
	cin >> number;
	cin >> hours;
	cin >> perHour;
	salary = hours * perHour;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
	return 0;
}