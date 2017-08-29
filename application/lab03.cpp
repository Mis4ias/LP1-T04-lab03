#include <iostream>
#include <vector>
#include "matriz.h"
int main (){

	int linhas,colunas;
	vector<vector<int> > vtr1;
	cout<<"Digite o numero de Linhas "<<endl;
	cin >> linhas;	
	cout<<"Digite o numero de colunas "<<endl;
	cin >> colunas;	
	for (int i = 0; i < linhas; ++i){
		for (int j = 0; j < colunas; ++j){
			cin>> vtr1[i][j];	


		}
	}
}	