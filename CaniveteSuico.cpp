#include <iostream>
#include <stdlib.h>
using namespace std;
//Função para exibir menu
char menu(){
	char escolha;
	cout << endl << "---MENU OPCOES---" << endl << " | X - SAIR DO PROGRAMA" << endl << " | 1 - Converter Binario Para Decimal " << endl << " | 2 - Converter Decimal para Binario" << endl << " | 3 - Converter velocidade KM/H para M/S" << endl << " | 4 - Tabuada" << endl << "---" << endl << "ESCOLHA OPCAO: ";
	cin >> escolha;
	system("cls");
	return escolha;
}

//Função para calcular o expoente
long long int expoente(int b, int e){
	long long int resultado = 1;
	if(e != 0){
		for(int i = 1; i <= e; i++){
		resultado = resultado * b;
		}
	}
	return resultado;
}

//Função para converter binario para decimal
int ConverteBinarioParaDecimal(int numbinario){
	int decimal = 0, i = 0, digito;
	while(numbinario !=0){
		digito = numbinario % 10;
		numbinario = numbinario / 10;
		decimal = decimal + digito * expoente(2,i);
		i++;
	}
	return decimal;
}

//Função para converter decimal para binario
int ConverteDecimalParaBinario(int numdecimal){
	int	decimal = 0;
	int i = 0;
	int resto;
	while(numdecimal > 0){
		resto = numdecimal % 2;
		numdecimal = numdecimal / 2;
		decimal = decimal += resto * expoente(10,i);
		i++;
	}
	return decimal;
}

//Função converter km/h para m/s
double KmhMs(double kmh) {
    return kmh / 3.6;
}

//Função para verificar valor booleano
bool verificarvalorbool(long int numbin){
	int dig;
	bool tkl = true;
	while(numbin > 0){
		dig % 10;
		if(dig != 0 || dig != 1){
			tkl = false;
		}
		cout << tkl << endl;
		dig = dig % 10;
	}
	return tkl;
}

//Função para exibir o submenu
char submenu()
{
	char tabua;
	cout << "---SUBMENU TABUADA " << endl << " | X - SAIR DO MENU " << endl << " | 1 - ADICAO " << endl << " | 2 - SUBTRACAO " << endl << " | 3 - DIVISAO " << endl << " | 4 - MULTIPLICACAO " << endl << "---" << endl << "Escolha opcao: ";
	cin >> tabua;
	return tabua;
}

//Função para adicionar dois numeros
double add(double a, double b){
   return a + b;
}

//Função para subtrair dois numeros
double sb(double a, double b){
   return a - b;
}

//Função para dividir dois numeros
double divii(double a, double b){
   return a / b;
}

//Função para multiplicar dois numeros
double multi(double a, double b){
   return a * b;
}

//Entrada do programa
int main(){
	//Declarar variáveis
	char opcao, op;
	int binario, decimal, numbin; 
	double velocidade , adicao, adi, subtracao, sub, dividir, div, multiplica, mult;
	//Menu geral e menu tabuada
	do{
		opcao = menu();
		switch(opcao){
			case 'x':
				cout << "Xauzinho";
				break;
			case 'X':
				cout << "Xauzinho";
				break;
			case '1':
				cout << "Insira numero Binario: ";
				cin >> binario;
				cout << "o numero Binario em Decimal e : " << ConverteBinarioParaDecimal(binario);
				cout << verificarvalorbool(numbin);
				break;
			case '2':
				cout << "Insira numero Decimal: ";
				cin >> decimal;
				cout << " O numero Decimal em Binario e: " << ConverteDecimalParaBinario(decimal);
				break;
			case '3':
				cout << "Insira uma velocidade km/h: ";
				cin >> velocidade;
				cout << "A velocidade em m/s e de: " << KmhMs(velocidade);
				break;
			case '4':
				//submenu do programa
				op = submenu();
				system("cls");
				switch(op){
					case '1':
						cout << "Insira o primeiro numero para somar: ";
						cin >> adicao;
						cout << "Insira o segundo numero para somar";
						cin >> adi;
						cout << "A soma dos dois numeros e: " << add(adicao, adi);
						break;
					case '2':
						cout << "Insira o primeiro numero para subtrair: ";
						cin >> subtracao;
						cout << "Insira o segundo numero para subtrair: ";
						cin >> sub;
						cout << "A subtracao dos dois numeros e: " << sb(subtracao, sub);
						break;
					case '3':
						cout << "Insira o primeiro numero para dividir: ";
						cin >> dividir;
						cout << "Insira o segundo numero para dividir: ";
						cin >> div;
						cout << "A divisao dos dois numeros e: " << divii(dividir, div);
						break;
					case '4':
						cout << "Insira o primeiro numero para multiplicar: ";
						cin >> multiplica;
						cout << "Insira o segundo numero para multiplicar: ";
						cin >> mult;
						cout << "A multiplicacao dos dois numeros e: " << multi(multiplica, mult);
						break;
					default:
						cout << "opcao invalida";
						break;	
					}
					break;
			default:
				cout << "opcao invalida";
				break;
		}
	}while(opcao != 'x' && opcao != 'X');
	return 0;
}
