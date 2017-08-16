#include <iostream>
using namespace std;

int main() {
	double a, b, c, average, weightA, weightB, weightC;
	weightA = 2;
	weightB = 3;
	weightC = 5;
	cin >> a;
	cin >> b;
	cin >> c;
	average = ( (a * weightA) + (b * weightB) + (c * weightC) ) / (weightA + weightB + weightC);
	printf("MEDIA = %.1f\n", average);
	return 0;
}