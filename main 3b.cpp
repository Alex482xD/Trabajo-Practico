#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int ax, bx, c;

	cout << "Ingrese valor x^2: " << endl;
	cin >> ax;
	cout << "Ingrese valor x: " << endl;
	cin >> bx;
	cout << "Ingrese valor c:  " << endl;
	cin >> c;

	int raiz =0 ;
	raiz =  (sqrt( pow(bx,2)- 4*ax*c ));

	double x1=0, x2=0;

	if (ax==0) {

		cout << "¡¡¡ NO cumple los requisitos para usar cuadratica !!!" <<endl;

		float vx;

		vx =  - c / bx;

		cout << "valor de x: " << vx << endl;

	}
	else {
			if (raiz>=0){

				x1 =  (-(bx) + (raiz))/ (2*ax);
				x2 =  (-(bx) - (raiz))/ (2*ax);

				if (x1 == x2){
					cout<< "raices doble: " << x1 << endl;
				}
				else{
					cout << "valor de x1: " << x1 << endl;
					cout << "valor de x2: " << x2 << endl;
				}
			}
			else{

				float numc;
				numc = sqrt(abs ((pow (bx,2) - 4*ax*c)));

				cout<< "x1: " << -bx << " + raiz( " << numc << " i ) / " << 2*ax << endl;
				cout<< "x2: " << -bx << " - raiz( " << numc << " i ) / " << 2*ax << endl;
			}
	}
	return 0;
}
