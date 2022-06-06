#include <iostream>
#include <fstream>


using namespace std;

int main() {
	
	inicioprograma:
		
	float notaprogramacion, notaalgoritmos, notasistemas, prom,notamayor;
	string nombrearchivo, resultadofinal;
	int op, op1;

	
	cout<<" --------------------------------------------------"<<endl;
	cout<<"|   Calculadora Promedio, Nota Mayor				  |"<<endl;
	cout<<" --------------------------------------------------"<<endl;
	
	
	cout<<"Bienvenido desea guardar los datos que va ingresar en un archivo de Texto?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. No"<<endl;
	cin>>op1;
	
	if (op1 ==1){
		cout<<"Escriba el nombre del archivo: "<<endl;
		cin>>nombrearchivo;
		
		ofstream archivo;
		
		archivo.open(nombrearchivo.c_str(),ios::out);
		
		system("cls");
		
		do{
		
		cout<<"Ingresa una de las siguientes opciones"<<endl;
		cout<<"1. (OBLIGATORIO) Ingreso de Notas"<<endl;
		cout<<"2. Mostrar Nota Mayor"<<endl;
		cout<<"3. Promedio de las notas"<<endl;
		cout<<"4. Guardar los datos y salir"<<endl;
		cout<<"R//  ";
			
			
		cin>>op;
	

		if(op>0 && op<=4){

			switch(op){
				case 1:
					
					cout<<"Ingrese la nota del curso de Programacion"<<endl;
					cin>>notaprogramacion;
					cout<<endl;
					
					cout<<"Ingrese la nota del curso de Algoritmos"<<endl;
					cin>>notaalgoritmos;
					cout<<endl;
					
					cout<<"Ingrese la nota del curso de Logica de sistemas"<<endl;
					cin>>notasistemas;
					cout<<endl;				
					
					break;
				case 2:

					if (notaprogramacion>notaalgoritmos && notaprogramacion>notasistemas){
						notamayor=notaprogramacion;
					}
					
					else if	(notaalgoritmos>notaprogramacion && notaalgoritmos>notasistemas){
						notamayor=notaalgoritmos;
					}
					
						else if	(notasistemas>notaprogramacion && notasistemas>notaalgoritmos){
						notamayor=notasistemas;
					}				
					
					cout<<"La nota mayor es: "<<notamayor<<endl<<endl;

					break;
				case 3:
					
					prom=(notaprogramacion+notaalgoritmos+notasistemas)/3;
					
					if(prom>=61){
						cout<<"El promedio es de: "<<prom<<endl;
						cout<<"***Promovido***"<<endl<<endl;
					}else{
						cout<<"El promedio es de: "<<prom<<endl;
						cout<<"***No Promovido***"<<endl<<endl;
					}
										
					break;
						
				case 4:	
					archivo<<"Nota Curso Programacion: "<<notaprogramacion<<endl;
					archivo<<"Nota Curso Algoritmoas: "<<notaalgoritmos<<endl;
					archivo<<"Nota Curso Logica de Sistemas: "<<notaalgoritmos<<endl;
					archivo<<"**************************"<<endl;
					archivo<<"Nota Mayor de todas: "<<notamayor<<endl;
					archivo<<"Promedio: "<<prom<<endl;			
					return 0;
			}
		}else{
			cout<<"La opcion introducida es invalida, vuelva a ejecutar el programa"<<endl;
			return 0;
		}
		
	}while(op !=4);
			

	
			
	}
	
		
	if (op1 ==2){

		do{
		
		cout<<"Ingresa una de las siguientes opciones"<<endl;
		cout<<"1. (OBLIGATORIO) Ingreso de Notas"<<endl;
		cout<<"2. Mostrar Nota Mayor"<<endl;
		cout<<"3. Promedio de las notas"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"R//  ";
			
			
		cin>>op;
	

		if(op>0 && op<=4){

			switch(op){
				case 1:
					cout<<"Ingrese la nota del curso de Programacion"<<endl;
					cin>>notaprogramacion;
					cout<<endl;
					
					cout<<"Ingrese la nota del curso de Algoritmos"<<endl;
					cin>>notaalgoritmos;
					cout<<endl;
					
					cout<<"Ingrese la nota del curso de Logica de sistemas"<<endl;
					cin>>notasistemas;
					cout<<endl;				
					
					break;
				case 2:

					if (notaprogramacion>notaalgoritmos && notaprogramacion>notasistemas){
						notamayor=notaprogramacion;
					}
					
					else if	(notaalgoritmos>notaprogramacion && notaalgoritmos>notasistemas){
						notamayor=notaalgoritmos;
					}
					
						else if	(notasistemas>notaprogramacion && notasistemas>notaalgoritmos){
						notamayor=notasistemas;
					}				
					cout<<endl;
					cout<<"La nota mayor es: "<<notamayor<<endl<<endl;

					break;
				case 3:

					prom=(notaprogramacion+notaalgoritmos+notasistemas)/3;
					
					if(prom>=61){
						cout<<endl;
						cout<<"El promedio es de: "<<prom<<endl;
						cout<<"***Promovido***"<<endl<<endl;
					}else{
						cout<<endl;
						cout<<"El promedio es de: "<<prom<<endl;
						cout<<"***No Promovido***"<<endl<<endl;
					}
					
					break;
						
				case 4:				
					return 0;
			}
		}else{
			cout<<"La opcion introducida es invalida, vuelva a ejecutar el programa"<<endl;
			return 0;
		}
		
	}while(op !=4);
		
		

		
		
	system("pause");
	return 0;
		
	}
	

}
	
	
