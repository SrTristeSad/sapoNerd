#include <stdio.h>
#include <stdlib.h>

main()
{
	int voto;
	int titulo;
	int in;
	int zona;
	int secao;
	
		printf("seja bem-vindo eleitor \n" );
		printf("infome os dados do seu titulo de eleitor abaixo! \n\n");
		printf("Numero de Inscriçao:");
		scanf("%d", &in);
		printf("Zona eleitoral:");
		scanf("%d", &zona);
		printf("Seçao eleitoral:");
		scanf("%d", &secao);
		printf("\n\nqual foi o pior presidente da história do brasil ?\n\n");
		printf("Lula - 13\nJair Bolsonaro - 22\n");
		printf("\nVoto:");
		scanf("%d", &voto);
		switch(voto){
			case 13:
			printf("você voto no Lula como o pior presidente da historia");
			break;
			case 22:
			printf("você voto no Bolsonaro  como o pior presidente da historia");
			break;
			default:
			printf("opção não existe!");
			break;
			}
		while (voto >= 0) {
			printf("infome os dados do seu titulo de eleitor abaixo! \n\n");
		printf("Numero de Inscriçao:");
		scanf("%d", &in);
		printf("Zona eleitoral:");
		scanf("%d", &zona);
		printf("Seçao eleitoral:");
		scanf("%d", &secao);
		printf("\n\nqual foi o pior presidente da história do brasil ?\n\n");
		printf("Lula - 13\nJair Bolsonaro - 22\nSair - 0");
		printf("\nVoto:");
		scanf("%d", &voto);
		switch(voto){
			case 13:
			printf("você voto no Lula como o pior presidente da historia");
			break;
			case 22:
			printf("você voto no Bolsonaro  como o pior presidente da historia");
			break;
			default:
			printf("opção não existe!");
			break;
			}
		}
}