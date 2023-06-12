#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int *pont1, *pont2;//criação de ponteiro
	int a,b, soma;
	
	cout<<"Digite 2 valores \n";
	cin>>a>>b;
	
	pont1=&a;
	pont2=&b;
	
	cout<<&a<<"\n";
	cout<<&b<<"\n";
	cout<<pont1<<"\n";
	cout<<pont2<<"\n";
	
	soma=a+b;
	
	*pont1=soma;
	cout<<*pont1<<"\n";
	cout<<a<<"\n";

    system("PAUSE");
    return EXIT_SUCCESS;


}