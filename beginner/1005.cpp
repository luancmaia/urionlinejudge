#include <iostream>
using namespace std;

int main() {
	double a, b, weightA, weightB, average;
	weightA = 3.5;
	weightB = 7.5;
	cin >> a;
	cin >> b;
	average = ( (a * weightA) + (b * weightB) ) / (weightA + weightB);
	printf("MEDIA = %.5f\n", average);
	return 0;
}