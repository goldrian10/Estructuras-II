#include <stdio.h>
#include <string.h>




int cuenta(int var){
		char hla[50];
		int c = 0 ;
		while(fgets(hla, sizeof(hla) ,stdin)){
		
			if(hla[2] == var){
				c++;
			}
		}
	
	return c;
}


//main
int main(int argc, char** argv){

	int ls=0;
	int contador = 0;
	int var = 0;
	char nombre[]="     ";
	
	
	//guarda el valor de mi argumento 2 en la variable ls
	sscanf(argv[2], "%d", &ls); 
	
	//determina si mi ls es un 0 o un 1
	if(ls == 1){
		var = 49;
		strcpy(nombre ,"unos");
	}else if(ls ==0){
		var=48;
		strcpy(nombre ,"ceros");
	}
	contador = cuenta(var);
	printf("%s %d\n",nombre,contador );
	

	return 0;
}
