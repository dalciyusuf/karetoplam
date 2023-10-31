#include <stdio.h>

main()
{
	//Dışardan girilen n sayısına kadar olan sayıların karelerinin toplamını hesaplayan c programı.
	
	int n,toplam,i;
	printf("sayi giriniz:	");
	scanf("%d",&n);
	toplam=0;
	
		for(i=1;i<=n;i++)
			{
			toplam = (i*i)+toplam;
		
		
		
		
			}		

	printf("toplam = %d",toplam);
	

	
	return 0 ;
}
