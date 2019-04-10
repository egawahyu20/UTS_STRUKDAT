#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
	srand(time(NULL));
	int data[100];
	int cari;
	int a;
 
    for(int i=0;i<100;i++){
		data[i]=rand()%100;	
	}
	a=0;
	
	printf("Masukkan data yang ingin dicari= ");
	scanf("%d",&cari);
	
	for(int i=0;i<100;i++){
		if(data[i]==cari){ 
		a++;
		}
	}
	
	printf("Jumlah data yang ingin dicari= %d",a);
	
	
	return 0;
}