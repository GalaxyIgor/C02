
#include <iostream>
#include <iomanip>
using namespace std;

//fun��o para calcular peso ideal em determinado sexo
float ideal(float h, char sexo)
{
	float s; //declara��o do resultado
	
	//determina o calculo nescessario para qual sexo � requerido
    if(sexo =='M')
	
	s = 72.7 * h - 58;
	
	
	else; if( sexo =='F')
	
	s = 62.1 * h - 44.7;
	
	return s;//retorna a fun��o
}

int main()
{
	char sexo; //sexo
	float h; //altura
	float p;//peso ideal

	cin >> h >> sexo;//entrada de valores
   
	p = ideal(h, sexo);//chama a fun��o ideal e determina o peso ideal
    
    //mostra na tela "Peso ideal = (peso) kg" e determina 2 casas decimais maximas
	cout<< fixed << setprecision(2)<< "Peso ideal = " << p << " kg" << endl;

	return 0;//sucesso
}
