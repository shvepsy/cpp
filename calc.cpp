#include <iostream>
#include <cstdlib>
using namespace std;

class Calc {
private:
	int x;
	int y;
public:
	int setVars(int q, int w) {
		x = q;
		y = w;
	}
	int getSum() {
		return x+y;
	}
	int getSub() {
		return x-y;
	}
	int getMul() {
		return x*y;
	}
	double getDiv() {
		return (double)x/y;
	}

};

int main(int argc,char *argv[]) {
	int a,b;
//	cout << argc << endl;
	if ( argc != 3 ) {
		cout << "Please enter 2 digits for calculate this" << endl ; exit(0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	Calc d;
	d.setVars(a,b);
//	int sum = d.getSum();
//	int mul = d.getMul();
	cout << "Sum is : " << d.getSum() << "\nSub is : " << d.getSub() << endl;
	cout << "Mul is : " << d.getMul() << "\nDiv is : " << d.getDiv() << endl;
	return 0;
}
