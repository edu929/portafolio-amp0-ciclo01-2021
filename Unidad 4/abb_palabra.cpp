		#include<iostream>
		#include<vector>
		#include<string>
		
		using std::vector;
		using std::string;
		
		class ABB;
		class Nodo{
			friend class ABB;
			private:
				string clave;
				int valor;
				Nodo *izq;
				Nodo *der;
			public:
				Nodo(string clave, int valor) : clave(clave), valor(valor), der(0), izq(0){
				
				}
		};
		
		class ABB{
			private:
				Nodo *raiz;
				int numeroNodos;
				void auxiliarPoner(Nodo *&raizSubArbol, string clave, int valor);
				void auxiliarDestruir(Nodo *raizSubArbol);
				void auxiliarBorrar(Nodo *&raizSubArbol, string clave);
				void auxiliarEnOrden(Nodo *raizSubArbol, vector<string> &v);
				void auxiliarCopiar(Nodo *raizSuArbol);
				Nodo *desvincularMinimo(Nodo *&raizSubArbol);
			public:
				ABB();
				ABB(const ABB &otro);
				int obtener(string clave);
				void poner(string clave, int valor){this->auxiliarPoner(this->raiz, clave, valor);}
				bool contiene(const string &clave){
					return this->obtener(clave)==-1;
				}
				void borrar(string clave);
				bool estaVacio();
				bool tamanio();
				vector<string> claves();		
		};
		
		ABB::ABB(){
		}
		
		int ABB::obtener(string clave){
			Nodo *nodoActual = this->raiz;
			while (nodoActual!=0){
				if (clave < nodoActual->clave){
					nodoActual = nodoActual->izq;
				}else if(clave > nodoActual->clave){
					nodoActual = nodoActual->der;
				}else{
					return nodoActual->valor;
				}
			}
			return -1;
		}
		
		void ABB::auxiliarPoner(Nodo *&raizSubArbol, string clave, int valor){
			if(raizSubArbol == 0){
				raizSubArbol = new Nodo(clave,valor);
				this->numeroNodos +=1;
				return;
			}
			if(clave < raizSubArbol->clave){
				this->auxiliarPoner(raizSubArbol->izq, clave, valor);
			} else if (clave > raizSubArbol->clave){
				this->auxiliarPoner(raizSubArbol->der, clave, valor);
			} else {
				raizSubArbol->valor = valor;
			}
		}
		
		void ABB::auxiliarEnOrden(Nodo *raizSubArbol, vector<string> &v){
			if(raizSubArbol == 0){
				return;
			}
			auxiliarEnOrden(raizSubArbol->izq, v);
			v.push_back(raizSubArbol->clave);
			auxiliarEnOrden(raizSubArbol->der, v);
		}
		
		vector<string> ABB::claves(){
			vector<string> v;
			this->auxiliarEnOrden(this->raiz, v);
			return v;
		}
		
		int main(int argc, char *argv[]){
			using namespace std;
			if(argc!=2){
				cout << "Usar " << argv[0] << " longitud_minima < nombre_Archivo\n " << endl;
				return 1;
			}
			
			int longitudMinima = stoi(argv[1]);
			cout << longitudMinima << endl;
			ABB arbolito;
			string palabra;
			
			while(cin >> palabra){
				if(palabra.size()< longitudMinima) continue;
				if(!arbolito.contiene(palabra)) arbolito.poner(palabra,1);
				else arbolito.poner(palabra, arbolito.obtener(palabra)+1);
			}
			
			vector<string> palabras = arbolito.claves();
			string palabraMasFrecuente= " ";
			for(int i = 0; i < palabras.size(); i++){
				string estaPalabra = palabras[i];
				if(arbolito.obtener(estaPalabra) > arbolito.obtener(palabraMasFrecuente))
					palabraMasFrecuente = estaPalabra;
			}
			
			cout << "Este archivo contiene " << palabras.size() << " palabras unicas " << endl;
			cout << "La palabra de almenos " << longitudMinima << " letras ";
			cout << " que mas se repite es: " << palabraMasFrecuente << endl;	
		 	return 0;
		 
		 }
