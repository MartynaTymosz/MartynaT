#include<iostream>

using namespace std;

void szyfruj(int klucz, char tab[])
{
	int dl = strlen
	
	if(!(klucz >= -26 && klucz <= 26)) return;
	
	if(klucz >= 0)
		for(int i=0;i<dl;i++)
		if(tab[i] + klucz <= 'Z')
			tab[i] += klucz;
		else
			tab[i] = tab[i] + klucz - 26; 
	else
		for(int i=0;i<dl;i++)
		if(tab[i] + klucz >= 'A')
			tab[i] += klucz;
		else
			tab[i] = tab[i] + klucz + 26;
}

int main()
{
	char tab[1001];
	
	int klucz;
	
	cout<<"Podaj klucz z przedziału [-26..26]: ";
	cin>>klucz;
	
	szyfruj(klucz,tab);
	
	cout<<"Po zaszyfrowaniu: "<<tab<<endl;
	
	szyfruj(-klucz,tab);
	
	cout<<"Po rozszyfrowaniu: "<<tab<<endl;

	return 0;
}