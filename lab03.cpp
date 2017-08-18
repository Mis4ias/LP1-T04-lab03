#include <iostream>
#include <vector>

using namespace std;


void transpose  (vector<vector<int> > &vtr1,vector<vector<int> > &vtr2,int l,int c){
		
		for (int i = 0; i < l ; ++i){
			for (int j = 0; j < c; ++j){
				vtr2[j][i]=vtr1[i][j];

			}
		}


}
bool quadrada(vector<vector<int> > vtr1,int l,int c){
	if(l==c){
		return true;
	}else {
		return false;
	}
}
bool simetrica(vector<vector<int> >vtr1,int l,int c){
	if(l==c){
		for (int i = 0; i < l ; ++i){
			for (int j = 0; j < c; ++j){
				if(vtr1[i][j]==vtr1[j][i]){

				}
				else{
					return false;
				}
			}
		}
	}
	else{
		return false;
	}
	return true;
}

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