#include <fstream>

using namespace std;

class matrice {
	int l, c;
	int** info;
	public:
		matrice(int l = 0, int c = 0, int **info = NULL);
		matrice(const matrice& M);
		~matrice();
		matrice & operator = (const matrice M);
		matrice & operator += (const matrice M);
		matrice & operator -= (const matrice M);
		matrice & operator *= (const matrice M);
		friend matrice operator + (const matrice& M1, const matrice& M2);// -, *
		friend matrice operator - (const matrice& M1, const matrice& M2);
		friend matrice operator * (const matrice& M1, const matrice& M2);
		friend matrice operator - (const matrice &M1);
		friend ofstream& operator << (ofstream &d, const matrice &M);
		friend ifstream& operator >> (ifstream &i, matrice &M);
		const int* operator [] (int index);
};
