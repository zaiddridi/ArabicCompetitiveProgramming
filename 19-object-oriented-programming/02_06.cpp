#include <bits/stdc++.h>
#include "H02_06_rectangle.h"
using namespace std;

int main() {
	cout<<pow(2.0, 3.2);
	Rectangle r1;
	r1.SetWidth(5);
	r1.SetHeight(10);
	cout << r1.ComputeArea() << "\n";	// 50

	Rectangle r2(10, 3);
	cout << r2.ComputeArea() << "\n";	// 30
	r2.SetWidth(0);
	cout << r2.ComputeArea() << "\n";	// 0

	return 0;
}
