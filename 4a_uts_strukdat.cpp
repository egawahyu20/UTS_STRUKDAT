#include <stdio.h>
#include <conio.h>

int main()
{
	int data[8]= {8,10,6,-2,11,7,1,100};
	int cari;
	int flag=0;
	
	printf("Masukkan data yang ingin dicari= ");
	scanf("%d",&cari);
	
	for(int i=0;i<8;i++){
		if(data[i]==cari){ 
		flag=1;
		break;
		}
	}
	
	if(flag==1){
		printf("Data ada!\n");
	}
	else
		printf("Data tidak ada!\n");
	return 0;
}