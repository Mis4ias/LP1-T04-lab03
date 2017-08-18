#include <iostream>
#include <vector>

using namespace std;
void leitura_matriz(vector<vector<int> > &vtr1){
	int linhas,colunas;
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

void transpose  (vector<vector<int> > &vtr1,vector<vector<int> > &vtr2){
		int linhas,colunas;
		cout<<"Digite o numero de Linhas "<<endl;
		cin >> linhas;	
		cout<<"Digite o numero de colunas "<<endl;
		cin >> colunas;	
		for (int i = 0; i < linhas ; ++i){
			for (int j = 0; j < colunas; ++j){
				vtr2[j][i]=vtr1[i][j];

			}
		}


}

int main (){

}