

#include <iostream>
#include <math.h>

using namespace std;

int main() {

	float vel,  conv= 0;

	cout<< "ingrese la velocidad en mts/seg: " ; cin >> vel;

	if(vel >= 0 ){

		conv = vel * 3.6;

		cout << "es equivalente a: " << conv << " kmts/hr" << endl ;
	}
	else {

		cout<< "¡¡¡¡ error al ingresar la velocidad !!!!" << endl;

		cout<< "\t------------------" << endl;

		float vel2;
		cout << "ingrese velocidad nuevamente: " ; cin >> vel2 ;

			if(vel2 >= 0 ){

				conv = vel2 * 3.6;

				cout << "es equivalente a: " << conv << " kmts/hr" << endl ;
			}
			else{
				cout<< "intentos completados, error al ingresar la velocidad" << endl;
			}
	}

	return 0;
}
