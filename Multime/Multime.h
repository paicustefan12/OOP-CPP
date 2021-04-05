#include <iostream>

using namespace std;

template <typename T>
class Multime {
	T* buf;
	int n;
	public:
		Multime(T* buf = NULL, int n = 0){
			this->buf = new T[n];
			int i;
			for (i = 0; i < n; i++)
				this->buf[i] = buf[i];
			this->n = n;
		}
		Multime(const Multime& m){
			buf = new T[m.n];
			int i;
			for (i = 0; i < m.n; i++)
				buf[i] = m.buf[i];
			n = m.n;
		}
		Multime& operator += (const Multime& m){
			*this = *this + m;
			return (*this);
		}
		Multime& operator -= (const Multime& m){
			*this = *this -m;
			return (*this);
		}
		Multime& operator = (const Multime& m){
			buf = new T[m.n];
			int i;
			for (i = 0; i < m.n; i++)
				buf[i] = m.buf[i];
			n = m.n;
			return (*this);
		}
		friend Multime operator + (const Multime& m1, const Multime& m2){
			int i, j, k, OK;
			Multime g;
			T* a;
			a = new T[m1.n + m2.n];
			for ( i = 0; i < m1.n; i++)
				a[i] = m1.buf[i];
			k = m1.n;
			for (i = 0; i < m2.n; i++){
				OK = 0;
				for (j = 0;j < m1.n; j++){
					if(m2.buf[i] == m1.buf[j])
						OK = 1;
				}
				if(OK == 0){
					a[k] = m2.buf[i];
					k++;
				}
			}
			g.n = k ;
			g.buf = new T[k];
			for (i = 0; i < g.n; i++)
				g.buf[i] = a[i];
			delete [] a;
			return g;
		}
		friend Multime operator - (const Multime& m1, const Multime& m2){
			int i, j, k = 0, OK;
			Multime g;
			T* a;
			if (m1.n <= m2.n)
				a = new T[m1.n];
				else a = new T[m2.n];
			for (i = 0; i < m1.n; i++){
				OK = 0;
				for (j = 0; j < m2.n; j++)
					if(m1.buf[i] == m2.buf[j])
						OK = 1;
				if (OK == 1) {
					a[k] = m1.buf[i];
					k++;
				}
			}
			g.n = k;
			g.buf = new T[g.n];
			for (i = 0; i < g.n; i++)
				g.buf[i] = a[i];
			delete [] a;
			return g;
		}
		friend Multime* operator * (const Multime& m1, const Multime m2){
			Multime *g;
			int k = m1.n * m2.n, aux = 0, i, j;
			g = new Multime[k];
			for (i = 0; i < k; i++){
				g[i].buf = new T[2];
				g[i].n = 2;
			}
			for (i = 0; i < m1.n; i++)
				for (j = 0; j < m2.n; j++){
					g[aux].buf[0] = m1.buf[i];
					g[aux].buf[1] = m2.buf[j];
					aux++;
				}
			return g;
		}
		friend ostream& operator << (ostream &d, const Multime &m) {
			d<<m.n<<'\n';
			int i;
			for (i = 0; i < m.n; i++)
				d<<m.buf[i]<<' ';
			d<<'\n';
			return d;
		}
		friend istream& operator >> (istream &d, Multime &m) {
			int i;
			d>>m.n;
			m.buf = new T[m.n];
			for (i = 0; i < m.n; i++)
				d>>m.buf[i];
			return d;
		}
		int getNumar() {
			return n;
		}
		~Multime(){
			delete [] buf;
		}
		
};
