#include <stdio.h>
#include <windows.h>

typedef struct produto{
	int cod;
	char nome[30];
	float valor;
}produto;


//função referente a chamada das guitarras

produto guitarras(){
	
	produto guitarras[3];
	int codigo;
	
	guitarras[0].cod = 1254;
	guitarras[0].nome == "Guitarra 1";
	guitarras[0].valor = 1399.99;
	
	guitarras[1].cod = 2233;
	guitarras[1].nome == "Guitarra 2";
	guitarras[1].valor = 1500.00;
	
	guitarras[2].cod = 4678;
	guitarras[2].nome == "Guitarra 3";
	guitarras[2].valor = 990.50;
	
	printf("Digite o codigo da guitarra que deseja comprar:\n");
	for(int i = 0; i < 3; i++){
		printf("%s\ncodigo: %d\n valor: R$%.2f\n\n", guitarras[i].nome, guitarras[i].cod, guitarras[i].valor);
	}
	scanf("%d", &codigo);
	
	switch(codigo){
		
		case 1254:
			return(guitarras[0]);
		break;
		
		case 2233:
		    return(guitarras[1]);
		break;
		
		case 4678:
		    return(guitarras[2]);
		break;
		
		default:
			printf("Codigo invalido.");
		break;		
	}
	
}

//função referente a chamada das baterias

produto baterias(){
	
	produto baterias[3];
	int codigo;
	
	baterias[0].cod = 2465;
	baterias[0].nome == "Bateria 1";
	baterias[0].valor = 1999.99;
	
	baterias[1].cod = 2379;
	baterias[1].nome == "Bateria 2";
	baterias[1].valor = 1700.00;
	
	baterias[2].cod = 6942;
	baterias[2].nome == "Bateria 3";
	baterias[2].valor = 2560.50;
	
	printf("Digite o codigo da bateria que deseja comprar:\n");
	for(int i = 0; i < 3; i++){
		printf("%s\ncodigo: %d\n valor: R$%.2f\n\n", baterias[i].nome, baterias[i].cod, baterias[i].valor);
	}
	scanf("%d", &codigo);
	
	switch(codigo){
		
		case 2465:
			return(baterias[0]);
		break;
		
		case 2379:
		    return(baterias[1]);
		break;
		
		case 6942:
		    return(baterias[2]);
		break;
		
		default:
			printf("Codigo invalido.");
		break;		
	}
	
}

//função referente a chamada dos baixos

produto baixos(){
	
	produto baixos[3];
	int codigo;
	
	baixos[0].cod = 6783;
	baixos[0].nome == "Baixo 1";
	baixos[0].valor = 1400.99;
	
	baixos[1].cod = 4412;
	baixos[1].nome == "Baixo 2";
	baixos[1].valor = 1000.00;
	
	baixos[2].cod = 7901;
	baixos[2].nome == "Baixo 3";
	baixos[2].valor = 2000.50;
	
	printf("Digite o codigo do baixo que deseja comprar:\n");
	for(int i = 0; i < 3; i++){
		printf("%s\ncodigo: %d\n valor: R$%.2f\n\n", baixos[i].nome, baixos[i].cod, baixos[i].valor);
	}
	scanf("%d", &codigo);
	
	switch(codigo){
		
		case 6783:
			return(baixos[0]);
		break;
		
		case 4412:
		    return(baixos[1]);
		break;
		
		case 7901:
		    return(baixos[2]);
		break;
		
		default:
			printf("Codigo invalido.");
		break;		
	}
	
}

float frete(float valor, int taxa){
	
	float valorf = 0;
	
		valorf = valorf + valor;
	
	return (valorf + taxa);
}
//função referente ao inicio ou continuacao das compras

produto compras(){
	
	    int n;
	
	    printf("Loja de instrumenos\n\n Digite o codigo do instrumento que deseja comprar:\n1. Guitarras\n2. Baixos\n3. Baterias\n\n");
	    scanf("%d", &n);
	
		switch(n){
		
		case 1:
			return guitarras();
		break;
		
		case 2:
		    return baixos();
		break;
		
		case 3:
	        return baterias();
		break;
		
		default:
		break;
}
}

void inicio(){
	
	produto carrinho;
	int x, estado, taxa;
	
	printf("Selecione seu estado: \n");
	printf("1.Rio de Janeiro\n2.Minas Gerais\n3.Sao Paulo\n4.Demais localidades\n\n");
	scanf("%d", &estado);
	switch(estado){
		
		case 1:
			taxa = 25;
			break;
		case 2:
		    taxa = 30;
			break;	
		case 3:
		    taxa = 20;
			break;
		case 4:
		    taxa = 40;
			break	;	
	}
		carrinho = compras();
				
		printf("Seu carrinho: \n");
    
       
        printf("%s\nValor: %.2f\n",carrinho.nome, carrinho.valor);
	    printf("\nValor final: %.2f\n\n", frete(carrinho.valor, taxa));
	    system("pause");
		}
	

int main(){
	
  inicio();
  
  return 0;
    
}



