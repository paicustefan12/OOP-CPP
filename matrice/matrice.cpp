	#include "matrice.h"

	using namespace std;

	matrice::matrice(int l, int c, int **info) {
		int i, j;
		info = new int*[l];
		for (i = 0; i < l; i++)
			info[i] = new int[c];
		this->l = l;
		this->c = c;
		for (i = 0; i < l; i++)
			for (j = 0; j < c; j++)
				this->info[i][j] = info[i][j];
	}

	const int* matrice::operator [] (int index){
		if(index > -1 && index < l)
			return info[index];
	}


	matrice& matrice::operator = (const matrice M) {
		int i, j;
		l = M.l;
		c = M.c;
		info = new int*[l];
		for (i = 0; i < l; i++)
			info[i] = new int[c];
		for (i = 0; i < l; i++)
			for (j = 0; j < c; j++)
				info[i][j] = M.info[i][j];
		return *this;
	}

	matrice::matrice(const matrice& M) {
		*this = M;
	}

	matrice operator + (const matrice& M1, const matrice& M2) {
		int i, j;
		matrice g;
		g.l = M1.l;
		g.c = M1.c;
		g.info = new int*[g.l];
		for( i = 0; i < g.l; i++)
			g.info[i] = new int[g.c];
		for ( i = 0; i < M1.l; i++)
			for ( j = 0; j < M1.c; j++)
				g.info[i][j] = M1.info[i][j] + M2.info[i][j];
		return g;

	}

	matrice operator - (const matrice& M1, const matrice& M2) {
		int i, j;
		matrice g;
		g.l = M1.l;
		g.c = M1.c;
		g.info = new int*[g.l];
		for( i = 0; i < g.l; i++)
			g.info[i] = new int[g.c];
		for ( i = 0; i < M1.l; i++)
			for ( j = 0; j < M1.c; j++)
				g.info[i][j] = M1.info[i][j] - M2.info[i][j];
		return g;

	}

	matrice operator * (const matrice& M1, const matrice& M2) {
		int i, j, k;
		matrice g;
		g.l = M1.l;
		g.c = M2.c;
		g.info = new int*[g.l];
		for( i = 0; i < g.l; i++)
			g.info[i] = new int[g.c];
		for (i = 0; i < g.l; i++)
			for ( j = 0; j < g.c; j++)
				g.info[i][j] = 0;
		for( i = 1; i <= M1.l; i++)
			for( j = 1; j <= M2.c; j++)
				for( k = 1; k <= M1.c; k++)
					g.info[i][j] += M1.info[i][k] * M2.info[k][j];
		return g;

	}

	matrice operator - (const matrice &M1) {
		int i, j;
		matrice g;
		g.l = M1.l;
		g.c = M1.c;
		g.info = new int*[g.l];
		for( i = 0; i < g.l; i++)
			g.info[i] = new int[g.c];
		for ( i = 0; i < M1.l; i++)
			for ( j = 0; j < M1.c; j++)
				g.info[i][j] = M1.info[i][j];
		return g;
	}

	matrice& matrice::operator += (const matrice M) {
		//*this = *this + M;
		matrice g = *this + M;
		*this = g;
		return *this;
	}

	matrice& matrice::operator -= (const matrice M) {
		*this = *this - M;
		return *this;
	}

	matrice& matrice::operator *= (const matrice M) {
		*this = *this * M;
		return *this;
	}

	ofstream& operator << (ofstream &d, const matrice &M) {
	int i, j;
	d<<M.l;
	d<<' ';
	d<<M.c;
	d<<'\n';
	for(i = 0; i < M.l; i++){
		for(j = 0; j < M.c; j++){
			d<<M.info[i][j];
			d<<' ';
		}
		d<<'\n';
	}
	return d;
	}

	ifstream& operator >>(ifstream& d, matrice& M) {
	int i, j;
	d>>M.l;
	d>>M.c;
	M.info = new int*[M.l];
		for( i = 0; i < M.l; i++)
			M.info[i] = new int[M.c];
	for(i = 0; i < M.l; i++)
		for(j = 0; j < M.c; j++)
			d>>M.info[i][j];
	return d;
	}

	matrice::~matrice () {
		int i;
		for ( i = 0; i < l; i++)
			delete [] info[i];
		delete [] info;
	}

