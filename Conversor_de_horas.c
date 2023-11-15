#include <stdio.h>
#include <stdlib.h>

int main(){
	system("cls");
	int temp;
	printf("\nQuanto minutos restantes?\nR: ");
	scanf("%d",&temp);
	int limite = 60;
	int tempSim = temp;
	int i, restante;
	for(i=1;tempSim > limite;i++){
		tempSim = tempSim - limite;
		if(tempSim < limite){
			restante = tempSim;
			if(tempSim < limite && restante !=0){
				i--;
			}
		}
	}	
	if(tempSim < limite && restante != 0){
		if(restante > 0 && restante < 10){
			printf("\nTempo em horas: %dh0%dm",i,restante);
		}else{
			printf("\nTempo em horas: %dh%dm",i,restante);
		}
	}else{
		printf("\nTempo em horas: %dh00m",i);
	}
	printf("\n\n");
	system("pause");
	system("cls");
	return 0;
}