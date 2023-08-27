#include<iostream>
#include<list>

using namespace std;

class Neurona{
	private:
		int id;
		float voltaje;
		int posicion_x;
		int posicion_y;
		int red;
		int blue;
		int green;
	public:
		Neurona() = default;
		Neurona(int I, float V, int PX, int PY, int R, int G, int B): id(I), voltaje(V), posicion_x(PX), posicion_y(PY), red(R), green(G), blue(B){
		};
		void print(){
			cout<<"Neurona: "<<id<<endl;
			cout<<"voltaje: "<<voltaje<<endl;
			cout<<"posicion_x: "<<posicion_x<<endl;
			cout<<"posicion_y: "<<posicion_y<<endl;
			cout<<"red: "<<red<<" blue: "<<blue<<" green: "<<green<<endl;
		};
};

class admNeurona{
	private:
		list<Neurona> listaNeuronas;
	public:
		void agregar_inicio(Neurona neurona){
		 	listaNeuronas.insert(listaNeuronas.begin(), neurona);
		}
		void agregar_final(Neurona neurona){
			listaNeuronas.push_back(neurona);
		}
		void mostrar(){
			for(Neurona neurona : listaNeuronas){
				cout<<"--------------"<<endl;
				neurona.print();
				cout<<"--------------"<<endl;
			}
		}
		 
};

int main(){
	admNeurona adm;
	int opcion = 0;
	int id, posicion_x, posicion_y, red, green, blue;
    float voltaje;
    Neurona agregarNeurona;
	
	while(opcion != 4){
		cout<<"********Menu de Neuronas********"<<endl;
		cout<<"1.- Agregar neurona al incio"<<endl;
		cout<<"2.- Agregar neurona al final"<<endl;
		cout<<"3.- Mostrar todas las neuronas"<<endl;
		cout<<"4.- Salir"<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1:
			    cout<<"Ingrese su neurona: "<<endl;
			    cout << "Id: ";
			    cin >> id;
			    cout << "Voltaje: ";
			    cin >> voltaje;
			    cout << "Posicion X: ";
			    cin >> posicion_x;
			    cout << "Posicion Y: ";
			    cin >> posicion_y;
			    cout << "Rojo: ";
			    cin >> red;
			    cout << "Verde: ";
			    cin >> green;
			    cout << "Azul: ";
			    cin >> blue;
			    agregarNeurona = Neurona(id, voltaje, posicion_x, posicion_y, red, green, blue);
			    adm.agregar_inicio(agregarNeurona);
				break;
			case 2:
			    cout<<"Ingrese su neurona: "<<endl;
			    cout << "Id: ";
			    cin >> id;
			    cout << "Voltaje: ";
			    cin >> voltaje;
			    cout << "Posicion X: ";
			    cin >> posicion_x;
			    cout << "Posicion Y: ";
			    cin >> posicion_y;
			    cout << "Rojo: ";
			    cin >> red;
			    cout << "Verde: ";
			    cin >> green;
			    cout << "Azul: ";
			    cin >> blue;
			    agregarNeurona = Neurona(id, voltaje, posicion_x, posicion_y, red, green, blue);
			    adm.agregar_final(agregarNeurona);
				break;
			case 3:
				adm.mostrar();
				break;
			case 4:
				cout<<"Saliendo...";
				break;
			default: 
				cout<<"Ingresa una opcion valida pls"<<endl;
		}
	}
	
	return 0;
}