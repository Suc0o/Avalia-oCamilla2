#include <stdio.h>

//Estrutura das vendas

typedef struct vendas{
	char item[30];
	char cliente[50];
	float valor;
	} vendas;
	
	//Limpar buffer
	
	void limp(){
		char c;
		while((c = getchar()) != '\n' && c != EOF);
	}
	
	//Função que ordena as vendas
	
	vendas ordem(vendas v[]){
		
		for(int i = 0; i < 9; i++){
			
			int x = i + 1;
			
			for(int j = x; j < 9; j++){
				
				vendas aux = v[j];
				
				if(v[i].valor < v[j].valor){
					
					v[j] = v[i];
					v[i] = aux;
					 
				}
			}
		}
		

	}
	
int main(){
	
	vendas vendas[9];
	
	printf("Cadastro de vendas:\n\n");
	
	for(int i=0; i < 9; i++){
		
	printf("%d venda:", i + 1);
	printf("\n\nDigite o produto da %d venda:\n", i + 1);
	fgets(vendas[i].item, 30, stdin);
	limp();
	
	printf("\nDigite o nome do %d cliente:\n", i + 1);
	fgets(vendas[i].cliente, 50, stdin);
	limp();
	
	printf("\nDigite o valor do %d produto:\n", i + 1);
	scanf("%f", &vendas[i].valor);
}

    vendas[9] = ordem(vendas);
    
    for(int i = 0; i < 9; i++){
    	
    printf("---Venda %d---\n", i + 1);
    printf("Cliente: %s", vendas[i].cliente);
    printf("Produto: %s", vendas[i].item);
    printf("Valor: %.2f", vendas[i].valor);
    
    }
    
    return 0;
    
}
