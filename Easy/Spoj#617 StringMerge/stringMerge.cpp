#include <iostream> 
#include <cstring>  

using namespace std;  
 
#define T_SIZE 1001  
 
string string_merge(char *S1, char *S2)
{
	string resault = "";

	while(*S1 != 0 && *S2 != 0)
	{
		resault += *S1;
		resault += *S2;
		
		S1++;
		S2++;
	}

	return resault;
};  
 
int main()
{   
	int t,n;   
	
	char S1[T_SIZE], S2[T_SIZE];
	string S;    
	
	cin >> t; /* wczytaj liczbę testów */   
	
	cin.getline(S1,T_SIZE);    
	
	while(t)
	{      
		cin.getline(S1,T_SIZE,' ');     
		cin.getline(S2,T_SIZE);           
		S=string_merge(S1,S2);     
		cout << S << endl;     
		// delete[] S;     
		t--;     
	}    
	
	return 0;
} 