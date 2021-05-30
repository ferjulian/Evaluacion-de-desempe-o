#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int potencial (int calidad, int cooperacion, int capacidad){
	
	int resultado;
	
	if(calidad >= 4 && cooperacion >= 4 && capacidad >= 4){
		
		resultado = 1;
	}else{
		
		resultado = 0;
	}
	
	return resultado;
}

void mostrarPotencial (int potencial, int codigo){
	
	if(potencial == 1){
		
		printf(" \n Empleado: %i", codigo);
		printf(" \n Tiene capacidad de desarrollo");
	}else{
		printf(" \n No tiene capacidad de desarrollo");
		printf(" \n Empleado: %i", codigo);
	}
}

int promedio(int calidad, int cooperacion, int capacidad){
	
	int prom;
	
	prom = (calidad+cooperacion+capacidad)/3;
	
	return prom;
}

main(){
	
	int codigo;
	int dias;
	char profesional[3];
	int calidad;
	int cooperacion;
	int capacidad;
	char respuesta[3];
	int cont;
	int maxCodigo;
	int maxDias;
	int bandera = 1;
	
	do{
		
		/*Ingreso de datos*/
		
		printf("Ingrese codigo del empleado ");
		fflush(stdin);
		scanf("%i", &codigo);
		
		printf("Ingrese dias trabajados ");
		fflush(stdin);
		scanf("%i", &dias);
		
		printf("Ingrese SI/NO si es profesional ");
		fflush(stdin);
		scanf("%s", profesional);
		
		printf("Ingrese calidad y cantidad de trabajo ");
		fflush(stdin);
		scanf("%i", &calidad);
		
		printf("Ingrese cooperacion ");
		fflush(stdin);
		scanf("%i", &cooperacion);
		
		if(strcmp(profesional, "SI")==0){
		printf("Ingrese capacidad de analisis y creatividad ");
		fflush(stdin);
		scanf("%i", &capacidad);
		}else{
			capacidad = 0;
		}
		
		
		/*Funcion potencial*/
		
		int potencialTotal = potencial(calidad, cooperacion, capacidad);
		
		mostrarPotencial(potencialTotal, codigo);
		
		/*Profesionales fuera de nivel*/
		
		int promedioTotal = promedio(calidad, cooperacion, capacidad);
		
		if (promedioTotal < 3){
			cont = cont +1 ;
		}
		
		/*Mayor cantidad de dias*/
		
		if(bandera == 1){
			maxCodigo = codigo;
			maxDias = dias;
		}else{
		
		if(maxDias < dias){
			maxCodigo = codigo;
			maxDias = dias;
		}
		
		}
		
		
		printf(" \n \n Desea seguir registrando empleados? Ingrese SI/NO ");
		fflush(stdin);
		scanf("%s",respuesta);
		
	}while(strcmp("SI", respuesta)== 0);
	
	printf(" \n Cantidad de profesionales fuera de nivel: %i", cont);
	printf(" \n Empleado con mayor cantidad de dias trabajados : %i", maxCodigo);
}
