#include<iostream>
#include <conio.h>
#include <limits>
using namespace std;

class persona {
private:
    string nombre, direccion, monto, prima;

public:
    persona(string, string, string, string); // Constructor
    void personal();
};

class vida {
private:
    string nacimiento, beneficiarios;

public:
    vida(string, string);
    void vidap();
};

class carro {
private:
    string licencia, estado, modelo, ano;

public:
    carro(string, string, string, string);
    void carrou();
};

class casa {
private:
    string referencias, antiguedad, seguridad;

public:
    casa(string, string, string);
    void casap();
};

persona::persona(string _nombre, string _direccion, string _monto, string _prima) {
    nombre = _nombre;
    direccion = _direccion;
    monto = _monto;
    prima = _prima;
}

vida::vida(string _nacimiento, string _beneficiarios) {
    nacimiento = _nacimiento;
    beneficiarios = _beneficiarios;
}

carro::carro(string _licencia, string _estado, string _modelo, string _ano) {
    licencia = _licencia;
    estado = _estado;
    modelo = _modelo;
    ano = _ano;
}

casa::casa(string _referencias, string _antiguedad, string _seguridad) {
    referencias = _referencias;
    antiguedad = _antiguedad;
    seguridad = _seguridad;
}

void persona::personal() {
    cout << "El nombre es: " << nombre << endl;
    cout << "La dirrecion es: " << direccion << endl;
    cout << "El monto de la poliza es: " << monto << endl;
    cout << "La prima de la poliza es: " << prima << endl;
}

void vida::vidap() {
    cout << "Tu nacimiento es: " <<nacimiento<< endl;
    cout << "Los beneficiarios son: "<< beneficiarios << endl;
}

void carro::carrou() {
    cout << "La licencia es: " << licencia << endl;
    cout << "El estado es: " << estado << endl;
    cout << "El modelo es: " << modelo << endl;
    cout << "El ano es: " << ano << endl;
}

void casa::casap() {
    cout << "Las referencias son: " << referencias << endl;
    cout << "La antiguedad es: " << antiguedad << endl;
    cout << "La seguridad es: " << seguridad << endl;
}

int main() {
	string _licencia_, _ano_, _modelo_, _estado_;
	string _referencias_, _antiguedad_, _seguridad_;
	string _nacimiento_, _beneficiarios_;
    string _nombre_, _direccion_, _monto_, _prima_;
    cout<<"\tBienvenido al seguro"<<endl<<endl;
    cout << "Ingresa tus datos personales" << endl << endl;
    cout << "Ingresa tu nombre" << endl;
    getline(cin, _nombre_);
    cout << "Ingresa tu direccion" << endl;
    getline(cin, _direccion_);
    cout << "Ingresa el monto" << endl;
    getline(cin, _monto_);
    cout << "Ingresa la prima" << endl;
    getline(cin, _prima_);
    
    int opc;
    while(opc!=6){
    	cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
		cin.get();
		system("cls");
    	persona r1(_nombre_, _direccion_, _monto_, _prima_);
    	r1.personal();
    	printf("Escoge el numero segun la opcion: \n");
		printf("\n1. Seguro de vida \n2. Seguro de carro \n3. Seguro de casa \n4. Modificar algun seguro ");
		printf("\n5. Ver informacion de tus seguros \n6. Salir \n");
		scanf("%d", &opc);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');	
			switch(opc){
			
				case 1: {
					cout<<"\nPULSA 'ENTER' PARA CONTINUAR'";getch();system("cls");
				
					cout<<"Ingresa tu fecha de nacimiento: ";
					getline(cin, _nacimiento_);
					cout<<"Ingresa los beneficiarios: ";
					getline(cin, _beneficiarios_);
			
					cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
					cin.get();
					system("cls");
			
					cout<<"\tDatos personales"<<endl<<endl;
					persona r1(_nombre_, _direccion_, _monto_, _prima_);
    				r1.personal();
			
					cout<<"\n\tSeguro de vida"<<endl<<endl;
					vida r2(_beneficiarios_, _nacimiento_);
					r2.vidap();
					cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
					cin.get();
					system("cls");
				break;
				}
				case 2: {
				
					cout<<"\nPULSA 'ENTER' PARA CONTINUAR'";getch();system("cls");
				
					cout<<"Ingresa tu licencia: ";
					getline(cin, _licencia_);
					cout<<"Ingresa el estado: ";
					getline(cin, _estado_);
					cout<<"Ingresa el modelo: ";
					getline(cin, _modelo_);
					cout<<"Ingresa el ano: ";
					getline(cin, _ano_);
			
					cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
					cin.get();
					system("cls");
			
					cout<<"\tDatos personales"<<endl<<endl;
					persona r1(_nombre_, _direccion_, _monto_, _prima_);
    				r1.personal();
			
					cout<<"\n\tSeguro de carro"<<endl<<endl;
					carro r3(_licencia_, _estado_, _modelo_, _ano_);
					r3.carrou();
					cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
					cin.get();
					system("cls");
					break;
					
				}
				
				case 3:{
					cout<<"\nPULSA 'ENTER' PARA CONTINUAR'";getch();system("cls");
				
					cout<<"Ingresa las referencias: ";
					getline(cin, _referencias_);
					cout<<"Ingresa la antiguedad: ";
					getline(cin, _antiguedad_);
					cout<<"Ingresa la seguridad: ";
					getline(cin, _seguridad_);
			
					cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
					cin.get();
					system("cls");
			
					cout<<"\tDatos personales"<<endl<<endl;
					persona r1(_nombre_, _direccion_, _monto_, _prima_);
    				r1.personal();
			
					cout<<"\n\tSeguro de casa"<<endl<<endl;
					casa r4(_referencias_, _antiguedad_, _seguridad_);
					r4.casap();
					cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
					cin.get();
					system("cls");
				break;
				}
				
				case 4:{
					int z;
					cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
					cin.get();
					system("cls");
					cout<<"\tIngresa el seguro que quieres modificar"<<endl<<endl;
					printf("\n1. Seguro de vida \n2. Seguro de carro \n3. Seguro de casa\n");
					cin>>z;
					switch(z){
							
						case 1: {
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout<<"\nPULSA 'ENTER' PARA CONTINUAR'";getch();system("cls");
					
							cout<<"Ingresa tu fecha de nacimiento: ";
							getline(cin, _nacimiento_);
							cout<<"Ingresa los beneficiarios: ";
							getline(cin, _beneficiarios_);
			
							cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
							cin.get();
							system("cls");
			
							cout<<"\tDatos personales"<<endl<<endl;
							persona r1(_nombre_, _direccion_, _monto_, _prima_);
			    			r1.personal();
			
							cout<<"\n\tSeguro de vida"<<endl<<endl;
							vida r2(_beneficiarios_, _nacimiento_);
							r2.vidap();
							cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
							cin.get();
							system("cls");
						break;
						}
						case 2: {
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout<<"\nPULSA 'ENTER' PARA CONTINUAR'";getch();system("cls");
				
							cout<<"Ingresa tu licencia: ";
							getline(cin, _licencia_);
							cout<<"Ingresa el estado: ";
							getline(cin, _estado_);
							cout<<"Ingresa el modelo: ";
							getline(cin, _modelo_);
							cout<<"Ingresa el ano: ";
							getline(cin, _ano_);
			
							cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
							cin.get();
							system("cls");
			
							cout<<"\tDatos personales"<<endl<<endl;
							persona r1(_nombre_, _direccion_, _monto_, _prima_);
    						r1.personal();
			
							cout<<"\n\tSeguro de carro"<<endl<<endl;
							carro r3(_licencia_, _estado_, _modelo_, _ano_);
							r3.carrou();
							cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
							cin.get();
							system("cls");
							break;
					
							}
				
						case 3:{
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout<<"\nPULSA 'ENTER' PARA CONTINUAR'";getch();system("cls");
				
							cout<<"Ingresa las referencias: ";
							getline(cin, _referencias_);
							cout<<"Ingresa la antiguedad: ";
							getline(cin, _antiguedad_);
							cout<<"Ingresa la seguridad: ";
							getline(cin, _seguridad_);
					
							cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
							cin.get();
							system("cls");
			
							cout<<"\tDatos personales"<<endl<<endl;
							persona r1(_nombre_, _direccion_, _monto_, _prima_);
    						r1.personal();
			
							cout<<"\n\tSeguro de casa"<<endl<<endl;
							casa r4(_referencias_, _antiguedad_, _seguridad_);
							r4.casap();
							cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
							cin.get();
							system("cls");
						break;
						}
					}
				break;
				}
				
				case 5:{
					cout<<"\n\n\nPULSA 'ENTER' PARA CONTINUAR";
					cin.get();
					system("cls");
					cout<<"\tDatos personales"<<endl<<endl;
					persona r1(_nombre_, _direccion_, _monto_, _prima_);
					r1.personal();
					
					cout<<"\n\tSeguro de casa"<<endl<<endl;
					vida r2(_beneficiarios_, _nacimiento_);
					r2.vidap();
					
					cout<<"\n\tSeguro de carro"<<endl<<endl;
					carro r3(_licencia_, _estado_, _modelo_, _ano_);
					r3.carrou();
					
					cout<<"\n\tSeguro de casa"<<endl<<endl;
					casa r4(_referencias_, _antiguedad_, _seguridad_);
					r4.casap();
					break;
				}
			}
	
    

}
return 0;
}

