#define ANSI  
#include <iostream> 
#include <cstring> 

using namespace std;  

void printfloat(float);  

int main() {   
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;   
	float x;    

	cin >> t; /* wczytaj liczbę testów */   

	while(t){      
		cin >> x;     

		printfloat(x);     

		t--;    
	}    

	return 0; 
}  
/* ........................  Tu napisz potrzebne funkcje */

void printfloat(float liczba){
	for (int i = sizeof liczba-1; i>=0; --i){
		cout << hex << (unsigned int)(((const unsigned char*)(&liczba))[i])<<' ';
	}

	cout<<'\n';
}
