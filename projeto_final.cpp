/*
	FACULDADE SENAC - JOINVILLE, SC
	PROFESSORA: CLÁUDIA WERLICH
	ALUNO: GABRIEL SOUSA DE OLIVEIRA
	MATÉRIA: INTR. A PROGRAMAÇÃO DE COMPUTADORES

	===========================
		PROJETO FINAL 
	===========================

	DATA: 22/06/2022
	
*/ 

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>


	int p,aux,i, total, temp,op;

	void bubble_sort(int matz[], int tam)
	{
		for(i = 0; i < tam; i++){
		for(p = 0; p < tam; p++) {
		if(matz[i] > matz[p]) {
		aux = matz[i];
		matz[i] = matz[p];
		matz[p] = aux;
               }
          }
     }
}

	int vetorct[60];
	int limt,valor,opcao;



	using namespace std;
	int main (){

	setlocale(LC_ALL, "Portuguese");
	
	system ("color C"); 
	string titulo;
	titulo = "\n\t\t\t ===> JOGO DA MEGA SENA <===";
	
	for(int i=0; i<32; i++){
	Sleep(100);
	cout << titulo[i];	
        }
        
	do {
		do {
			cout<<"\n\n\n **Confie em você e no seu potencial**\n";
			cout<<"\n\n Digite a quantidade de números que você quer jogar, entre 6 e 15: \n";
			cout<<"\n Quantidade --> ";
			cin>>limt;
			int vetor [limt];
			switch (limt) {
		
			case 6:{
			system ("color A"); 
			cout<<"\n\n O valor de 6 números é R$4,50. ";
			break;
			}
			case 7:{
			system ("color C"); 
			cout<<"\n\n O valor de 7 números é R$31,50. ";
			break;
			}
			case 8:{
			system ("color F"); 
			cout<<"\n\n O valor de 8 números é R$126,00. ";
			break;
			}
			case 9:{
			system ("color B"); 
			cout<<"\n\n O valor de 9 números é R$378,00. ";
			break;
			}
			case 10:{
			system ("color D"); 
			cout<<"\n\n O valor de 10 números é R$945,00. ";
			break;
			}
			case 11:{
			system ("color 8"); 
			cout<<"\n\n O valor de 11 números é R$2.079,00. ";
			break;
			}
		    	case 12:{
		    	system ("color 9"); 
			cout<<"\n\n O valor de 12 números é R$4.158,00. ";
			break;
			}
			case 13:{
			system ("color A"); 
			cout<<"\n\n O valor de 13 números é R$7.722,00. ";
			break;
			}
			case 14:{
			system ("color B"); 
			cout<<"\n\n O valor de 14 números é R$13.513,50. ";
			break;
			}
			case 15:{
			system ("color C"); 
			cout<<"\n\n O valor de 15 números é R$22.522,50. ";
			break;
			}
			default: {
			system ("color F"); 
			cout<<"\n\n Este número não está no limite proposto. ";
			break;
			}
    		  }
	     }while (limt > 15);
	}while (limt < 6);
	
		cout<<"\n\n Faça sua escolha:";
		cout<<"\n 1ª Opção - Informar números manualmente:\n";
		cout<<"\n 2ª Opção - Gerar números aleatórios:\n";
		cin>>opcao;
	
		int aposta[limt];
		int vetor [limt];
		switch (opcao){
		
		case 1:{
				
		for (i=0;i<limt;i++)
		{

			cout<<"\n\n informe o "<<i + 1<<"° número: ";
			cin>>aposta[i];

			if(aposta[i] > 60)
			{cout<<"\n\n O número deve ser menor ou igual a 60. \n ";
			i = i -1;}

			if(aposta[i] == aposta[i - 1])
			{cout<<"\n\n Não pode repetir o mesmo número. \n ";
			i = i -1;}

		}
				
				
		cout<<"\n\n Seus números são: \n\n";
   	    	for(i=0;i<limt;i++)
   		{
    			cout<<"  "<< aposta[i];
    		}
			
		break;	
		}	
				
    		case 2:{
				
		srand(time(NULL));  
   
   		for(i=0;i<limt;i++)
   		{
    			vetor[i] =(rand()%60)+1; 
       			if(vetor[i] == vetor[i - 1]){
			i = i -1;
   			}
   		}
 
    		cout<<"\n\n Seus números são: \n\n";
		for(i=0;i<limt;i++)
    		{
    			cout<<"  "<< vetor[i];
    		}
		break;
		}	
	
		}
		cout<<"\n";
		system("pause");
	
		cout<<"\n";

		int vetor2[limt];
   		srand(time(NULL));  
   		for(i=0; i<=6;i++)
   		{ 
    			vetor2[i] =(rand()%60)+1; 
    			if(vetor2[i] == vetor2[i - 1])
			{
				i = i -1;
   			}
   		}
		
    		bubble_sort(vetor2,6);
    
    		cout<<"\n\n Os números sorteados são: ";
    		for(i=0;i<6;i++)
		{
    	
    			cout<<"\n "<<vetor2[i]<<" ";
    	
		}
		
		for(int i=0;i>6;i++) {
		for(int j=0;j<limt;j++) {
		if(vetor[i]==vetor2[j])
		total++;
			}
		}
		 temp = 1;

		for(i=0;i<limt;i++)
		{
			switch (opcao){
		
			case 1:{
			if(aposta[i] == vetor2[temp]){
			total = total + 1;
			}
		
			if(i == 6){
			temp = 1;
			}
		
    			temp = temp + 1;
			break;
		}
		
		case 2:{
		if(vetor[i] == vetor2[i])
		{
			total = total + 1;
		}
			
			if(i == 6)
			{
				temp = 1;
			}			
		
			temp = temp + 1;
		
		   	break;
					
			}
		}
	}

	cout<<"\n Você acertou: "<<total<<" números.";
	cout<<"\n\n ===============================================================";
	cout<<"\n\n Sucesso é a soma de pequenos esforços, repetidos todos os dias!";
	cout<<"\n\n ===============================================================";

	  return 0;
      system("pause");
}
