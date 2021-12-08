#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void findValueOfArray(int array[],int find_Value,int tam,int pos){	
	bool isValue=false;
	
	cout<<"\nIngrese el valor que desee buscar dentro de los valores: ";
	cin>>find_Value;
	
	for(int j=0; j<tam; j++){
		if(find_Value == array[j]){
			pos=j;
			isValue=true;
		}
	}
	
	if(isValue==true){
		cout<<"\nDato encontrado ,su posicion del arreglo es : "<<pos;
	}else{
		cout<<"\nNo esta el dato";
	}
}

int main(){	
	int n_Datos[200];
	int tam_Array=0, search_value=0 ,pos=0;
	bool isValue=false, option = false;
	string continue_Function="";
	
	cout<<"Programa que busca datos en un arreglo \n";
	
	do{
		cout<<"\nCuantos datos va a ingresar en el arreglo : ";
		cin>>tam_Array;
		
		for(int i=0; i<tam_Array; i++){
			cout<<"\nIngresar el numero "<<(i+1)<<" : ";
			cin>>n_Datos[i];
		}
		
		cout<<"Datos actuales: \n";
		for(int k=0; k<tam_Array; k++){
			cout<<"["<<(n_Datos[k])<<"]";
		}
		cout<<"\n\n";
		
		findValueOfArray(n_Datos,search_value,tam_Array,pos);
			
		cout<<"\n\nDeseas seguir continuando? s/n : ";
		cin>>continue_Function;	
		if(continue_Function=="s"||continue_Function=="S"||continue_Function=="si"||continue_Function=="SI"){
			option=true;	
		}else{
			option=false;
		}	
	}while(option!=false);
	
	return 0;
}
