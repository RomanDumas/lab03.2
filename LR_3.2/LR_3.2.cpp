#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double x, a, b, c ,F;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	
	
	//1 спосіб

	if (c < 0 && a != 0) {
		F = -a * x * x;
		
	}
	if ((c > 0) && (a == 0)) {
		F = (a - x) / (c*x);
		
	}
	if (!(c < 0 && a != 0) && !((c > 0) && (a == 0))) {
		F = x / c;
		
	}
	cout << "1) F =" << F << endl;
	
	
	
	//2 спосіб

	if (c < 0 && a != 0) {
		F = -a * x * x;
	
	}
	else {
		if ((c > 0) && (a == 0)) {
			F = (a - x) / (c * x);
			
		}
		else {
			F = x / c;
			
		}
	}
		
	
	

	cout << "2) F =" << F;
	
	
	
	return 0;
}