#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);  

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d)
{
	int R1 , R2 , R3 , R4 , temp ;
	R1 = rand()%2 ;
	R2 = rand()%2 ;
	R3 = rand()%2 ;
	R4 = rand()%2 ;

	if(R1 == 0)
	{
		temp = *a ;
		*a = *b ;
		*b = temp;
	}
	if(R1 == 1)
	{
		;
	}
	if(R2 == 0)
	{
		temp = *b ;
		*b = *c ;
		*c = temp;
	}
	if(R2 == 1)
	{
		;
	}
	if(R3 == 0)
	{
		temp = *c ;
		*c = *d ;
		*d = temp;
	}
	if(R3 == 1)
	{
		;
	}
	if(R4 == 0)
	{
		temp = *d ;
		*d = *a ;
		*a = temp;
	}
	if(R4 == 1)
	{
		;
	}
}
