#ifndef __MATRIZ_H__
#define __MATRIZ_H__
#include <iostream>
#include <vector>

using namespace std;

void transpose  (vector<vector<int> > &vtr1,vector<vector<int> > &vtr2,int l,int c);
bool quadrada(vector<vector<int> > &vtr1,int l,int c);
bool simetrica(vector<vector<int> > &vtr1,int l,int c);
void triangular(vector<vector<int> > &vtr1,vector<vector<int> > &vtr2,int l,int c);
#endif