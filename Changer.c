#include <stdio.h>
int main ()
{
	int divisa, i, opc;
	float moneda, bolivar, canadiense, libra, pesoCol, pesoMex, yen, yuan, euro, realbr, pesoArg;
	i=0;
	do{
		printf("\nIntroduzca su cantidad %i\n: ", i+1);
		scanf("%f", &moneda);
		bolivar=moneda*32738.48; canadiense=moneda*1.31; libra=moneda*0.78;
		pesoCol=moneda*3777.51; pesoMex =moneda*21.98; pesoArg=moneda*69.31;
		yen=moneda*107.30; yuan=moneda*7.07; euro=moneda*0.88; realbr=moneda*5.06;
		printf("Introduzca el tipo de moneda que ha ingresado \nBOLIVAR marque -1-\nDOLAR CANADIENSE marque -2-\nLIBRA marque -3-\nPESO COLOMBIANO marque -4-\nPESO MEXICANO marque -5-\nPESO ARGENTINO marque -6-\nYEN marque -7-\nYUAN marque -8-\nEURO marque -9-\nREAL BRASILENHO marque -10-\n: ");
		scanf("%d", &divisa);
		if (divisa==1){
			printf("\nSu cantidad es-> %1.2f", bolivar,"Dolares");
		}
		else if(divisa==2){
			printf("\nSu cantidad es-> %1.2f", canadiense,"Dolares");
		}
		else if(divisa==3){
			printf("\nSu cantidad es-> %1.2f", libra,"Dolares");
		}
		else if(divisa==4){
			printf("\nSu cantidad es-> %1.2f", pesoCol,"Dolares");
		}
		else if(divisa==5){
			printf("\nSu cantidad es-> %1.2f", pesoMex,"Dolares");
		}
		else if(divisa==6){
			printf("\nSu cantidad es-> %1.2f", pesoArg,"Dolares");
		}
		else if(divisa==7){
			printf("\nSu cantidad es-> %1.2f", yen,"Dolares");
		}
		else if(divisa==8){
			printf("\nSu cantidad es-> %1.2f", yuan,"Dolares");

		}
		else if(divisa==9){
			printf("\nSu cantidad es-> %1.2f", euro,"Dolares");
		}
		else if(divisa==10){
			printf("\nSu cantidad es-> %1.2f", realbr,"Dolares");
		}
		else{
			printf("\nERROR SELECCIONE CORRECTAMENTE EL TIPO DE MONEDA QUE INGRESO\n");
		}
		printf("\nPresione 1 para CONTINUAR --- 2 para SALIR\n: ");scanf("%d",&opc);
		printf("\n----------------------------------");
	}while(opc==1);
	return 0;
}
}
