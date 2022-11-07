#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
//#include <locale.h>


int main(){
// opçao dos IF ou 
  int menu, menua;
// Cartório de Registro de Pessoas Naturais
  int registropn;
// nascimentos
  int ano, mes, dia, minuto,hora;  // dados como horas e dias 
  char pai[999], mae[999], filhoc[999];  
  char dataexn[999], sexoc[999], gemeo[999], nmc[999];
  char erro[1];
  char munic[999], munifc[999], icc[999], avo1c[999], avo2c[999], avo3c[999], avo4c[999], descc[999], dataexc[999], dvic[999], obsac[999];
// casamentos
  char noivo[999], noiva[999], ncsdnnnfc[999], datacaex[999], rgmca[999], nccpu[999], oaca[999], anoca1[999], anoca2[999];
int diaca, mesca, anoca, cpfnoiva, cpfnoivo;
char erro2[1];
// óbito
char oors[9999], cccs[9999], eeccs[9999], lcss[9999], cccos[9999], nnfs[9999], ddaexs[9999], ccos[9999], eecs[9999], ssfs[9999], eecss[9999], ppraas[9999], ppais[9999], mmes[9999], drs[9999], ccaas[9999];
	int  hhors, mminus, iidadfs;

/// Copyright
int menuc;
// copyright musica 
char nnmc[999], llmm[99999], llmlm[999], llkmm[999];
int ccpfm;
// Copyright livro
int ccpfc;
char nnec[999], nnoc[999], rrlc[99999], llikc[999];
char erro3;
//copyright video
char nnpv[999], ddfv[999], ddevv[999], ddsvv[999];
int ccnpjv;
//copyright filme 
char nnff[999], nnpf[999], dddef[999], dddsf[999], dddff[999], lllf[999], spf[99999];
int ccnpjf;
  // menu 
  do{
 printf("##################################### \n");
 printf("============== SrTriste ============= \n");
 printf("##################################### \n");
 printf("==========Cartário digital===========\n");
 printf("##################################### \n");
 printf("\n9 - MENU \n \n #####################################\n1 - Cartório de Registro de Pessoas Naturais  \n2 - Copyright\n \n Digite a opção da sua escolha \n");
 scanf("%d", &registropn);
if (registropn<=1){
printf("\n9 - MENU\n \n #####################################\n1 - Registro de Nascimento\n2 - Registro de Casamento\n3 - Registro de Óbito \nDigiste a Opção da Sua Escolha\n");
  scanf("%d", &menu);
  switch ( menu){
   case 1 :
   // registro de nascimento
printf("##################################### \n");
printf("##################################### \n"); printf("==========Registro de Nascimento===========\n");
printf("##################################### \n"); 
gets(erro);
  printf("\nNome:");
  //scanf("%s", &filhoc);
 gets(filhoc);
  printf ("Data de Nascimento [por extenso]\n");
  gets(dataexn);
  printf("Data de Nascimento\n");
  printf ("Dia:");
  scanf ("%d", &dia);
  printf("Mês:");
  scanf ("%d", &mes);
  printf("Ano:");
  scanf ("%d", &ano);
  printf("horário de nascimento\n");
  printf("hora:");
  scanf ("%d", &hora);
  printf("minuto:");
  scanf ("%d", &minuto);
  gets(erro);
  printf ("município de nascimento e unidade da federação\n");
  gets(munic);
  printf("Município de registro e unidade da federação\n");
  gets(munifc);
  printf("Local de Nascimento:");
  gets(icc);
  printf ("sexo:");
  scanf ("%s", &sexoc);
  printf ("Filiação\n");
  gets(erro);
  printf("pai:");
  gets(pai);
  printf("Mãe:");
  gets(mae);
  printf ("avôs\n");
  printf ("Avô paterno:");
  gets(avo1c);
  printf("avó Paterna:");
  gets(avo2c);
  printf("Avô Materno:");
gets(avo3c);
  printf("Avô Materno:");
  gets(avo4c);
  printf("Gêmeos:");
  scanf("%s", &gemeo);
  gets(erro);
printf ("Nome e matrícula do(s) Gêmeos\n");
    gets(nmc);
   printf("declarante\n");
    gets(descc);
    printf("Data do Registro [por extenso]\n");
  gets(dataexc);
    printf("Número da DVI declaração de nascido vivo\n");
    gets(dvic);
    printf("Observações/ Averbações\n");
    gets(obsac);
  
// impressão da certidão Nascimento
printf("\n\n\n##################################### \n");
printf("============== SrTriste ============= \n");
printf("##################################### \n"); printf("==========Certidão de Nascimento===========\n");
printf("##################################### \n"); 
  printf("\n\n\nNome\n%s\n", filhoc);
  printf ("Data de nascimento [por extenso]\n%s\n", dataexn);
  printf("dia %d\nMês %d\nAno %d\n",dia, mes, ano);
    printf("Horas de Nascimento\n%d:%d\n", hora, minuto);
  printf("Município de nascimento e unidade da federação\n%s\n", munic);
  printf("Município de Registro e Unidade da Federação\n%s\n", munifc);
  printf("local de nascimento\n%s\n", icc);
  printf("sexo\n%s\n", sexoc);
  printf("Filiação\n%s\n%s\n",pai, mae);
  printf("Avôs\n%s\n%s\n%s\n%s", avo1c, avo2c, avo3c, avo4c);
  printf ("Gêmeos\n%s\n", gemeo);
  printf("Nome e Matrícula do(s) Gêmeos\n%s\n", nmc);
  printf("Declarante\n%s\n", descc);
  printf("Data do Registro (por extenso)\n%s\n", dataexc);
  printf("Número da DVI Declaração de nascido vivo\n%s\n", dvic);
  printf("Observações/ Averbações\n%s\n", obsac);
    break;
    case 2 :
    // Registro de Casamento
printf("##################################### \n");
printf("##################################### \n"); printf("==========Registro de Casamento===========\n");
printf("##################################### \n"); 
gets(erro2);
  printf ("Nomes\n");
  printf ("Nome do Noivo:");
  gets(noivo);
  printf ("CPF do Noivo:");
  scanf ("%d", &cpfnoivo);
  gets(erro2);
  printf ("Nome da Noiva:");
  gets(noiva);
  printf("CPF da Noiva:");
  scanf ("%d", &cpfnoivo);
  gets(erro2);
  printf ("Nomes completos de solteiro (a), data de nascimento, naturalidade, nacionalidade, e filiação dos cônjuges.\n");
  gets(ncsdnnnfc);
  printf ("Data de Registro de Casamento(por extenso)\n");
 gets(datacaex);
  printf ("dia:");
  scanf ("%d", &diaca);
  printf ("Mês:");
  scanf ("%d", &mesca);
  printf ("Ano:");
  scanf ("%d", &anoca);
  gets(erro2);
  printf ("Regime de Bens do casamento\n");
  gets(rgmca);
  printf ("Nome que cada um dos conjuges possou a utilizar (Quando Houve Alteração)\n");
  gets(nccpu);
  printf("observações/ Averbações\n");
  gets(oaca);
  printf ("Anotações de cadastro do primeiro cônjuge\n");
  gets(anoca1);
  printf ("Anotações de cadastro do segundo cônjuge\n");
  gets(anoca2);
  
// impressão Registro de casamento
printf("\n\n\n##################################### \n");
printf("============== SrTriste ============= \n");
printf("##################################### \n"); printf("==========Registro dr casamento===========\n");
printf("##################################### \n"); 
  printf ("\n\n\nNomes\n%s\n%s\n", noivo, noiva);
  printf("CPF\n%d\n%d\n", cpfnoivo, cpfnoiva);
  printf ("Nomes completos de solteiro (a), data de nascimento, naturalidade, nacionalidade, e filiação dos cônjuges\n%s\n.", ncsdnnnfc);
  printf("Data de Registro de casamento (por extenso)\n%s\n", datacaex);
  printf ("Dia %d Mes %d Ano %d\n", diaca, mesca, anoca);
  printf ("Regime de bens do casamento\n %s\n", rgmca);
  printf("Nome que cada um dos conjuges possou a utilizar (Quando Houve Alteração\n%s\n)", nccpu );
  printf("Observações/ Averbações\n%s\n", oaca);
  printf("Anotações de cadastro do primeiro Cônjuge\n%s\n", anoca1);
  printf("Anotações de cadastro do segundo Cônjuge\n%s\n", anoca1);
 // printf (" senhor e a senhora, tem 15 para e a um cartório assinar os termos, tragar uma testemunha "););
  printf("observações/ averbações\n%s", obsac);
break;
case 3:

//  Guia de sepultamento 
printf("\n\n\n##################################### \n");
printf("##################################### \n"); printf("==========Guia de sepultamento===========\n");
printf("##################################### \n"); 

gets(erro);
  printf ("Oficial de registro:");
  gets(oors);
  printf ("cidade do cartório:");
  gets(cccs);
  printf ("Estado do Cartório:");
  gets(eeccs);
  printf ("local do cemitério o sepultamento:");
  gets(lcss);
 printf("cova:");
  gets(cccos);
  printf ("Nome do falecido:");
  gets(nnfs);
  printf ("horário do falecimento\n");
  printf ("hora:");
  scanf("%d", &hhors);
  printf ("minuto:");
  scanf("%d", &mminus);
  gets(erro);
  printf ("data (por extenso) ");
  gets(ddaexs);
  printf ("cidade do óbito");
  gets(ccos);
  printf("sexo do falecido:");
  scanf("%s", &ssfs);
  printf("idade do falecido:");
  scanf("%d", &iidadfs);
  gets(erro);
  printf ("estado civil:");
  gets(eecss);
  printf ("profissão:");
  gets(ppraas);
 printf("filho (a)\n");
  printf("pai:");
  gets(ppais);
  printf("mãe:");
  gets(mmes);
  printf ("Dr.(a):");
  gets(drs);
    printf("causa da morte:");
  gets(ccaas);
  
  //impressão do guia de sepultamento 
  printf("\n\n\n##################################### \n");
printf("============== SrTriste ============= \n");
printf("##################################### \n"); printf("==========Guia de Supultamento===========\n");
printf("##################################### \n"); 
    printf ("eu %s\nOficial do Registro do subdistrito de %s %s\nCertifico, para fins de sepultamento no cemitério %s na cova %s, que foi registrado, hoje, em meu cartório, o óbito de %s\n ocorrido às %d:%d horas no dia %s\n neste subdistrito, sendo o(a) falecido(a) natural de %s-%s, sexo %s, %d anos de idade, estado civil %s, profissão %s,\nFilho(a)de %s e %s.\n foi atestado pelo(a)Dr.(a) %s,\n como causa da morte “%s”", oors, cccs, eeccs, lcss, cccos, nnfs, hhors, mminus, ddaexs, ccos, eeccs, ssfs, iidadfs, eecss, ppraas, ppais, mmes, drs, ccaas);
    break;
  }
}
  else{
printf ("\n9 - MENU\n \n#####################################\n1 - música\n2 - livro\n3 - vídeo\n4 - filme\n Digiste a Opção da sua escolha\n");
scanf("%d", &menuc);
  switch(menuc){
  	case 1:
// Copyright musica
printf("\n\n\n##################################### \n");
printf("##################################### \n"); printf("==========Copyright Musica===========\n");
printf("##################################### \n"); 
gets(erro);
printf("nome do musico:");
gets(nnmc);
printf("CPF do musico:");
scanf("%d", &ccpfm);
gets(erro);
printf("letra da musica:");
	gets(llmm);
printf("link da melodia (mp3):");
gets(llkmm);
printf("link da musica com a letra(mp3):");
gets(llmlm);

// impressão Copyright musica
printf("\n\n\n##################################### \n");
printf("============== SrTriste ============= \n");
printf("##################################### \n"); printf("==========Copyright Musica===========\n");
printf("##################################### \n"); 
printf("musica de aotoria de %s\ncadastrado com o CPF - %d \nlink da melodia - %s\nlink da musica - %s\nLetra da musica\n\n%s", nnmc, ccpfm, llkmm, llmlm, llmm);

  break;  
  case 2:	
// Copyright livro
printf("\n\n\n##################################### \n");
printf("##################################### \n"); printf("==========Copyright Livro===========\n");
printf("##################################### \n"); 
gets(erro);
printf("nome do Escrito: ");
gets(nnec);
printf("cpf do escrito:");
scanf("%d", &ccpfc);
gets(erro);
printf("nome da obra:");
gets(nnoc);
printf("resumo do livro\n");
gets(rrlc);
printf("link da obra em PFD:");
gets(llikc);

// impressão Copyright livro
printf("\n\n\n##################################### \n");
printf("============== SrTriste ============= \n");
printf("##################################### \n"); printf("==========Copyright Livro===========\n");
printf("##################################### \n"); 
printf("\n\n\ntitulo do livro: %s\nescrito por: %s\ninscrito com o CPF:%d\nlink do livro em pdf:%s\n\nResumo:\n%s", nnoc, nnec, ccpfc, llikc, rrlc);
   break;
   case 3:
   //  Copyright Video
   printf("\n\n\n##################################### \n");
printf("##################################### \n"); printf("==========Copyright Video===========\n");
printf("##################################### \n"); 
gets(erro);
printf("nome da produtora:");
gets(nnpv);
printf("CNPJ:");
scanf("%d", &ccnpjv);
gets(erro);
printf("Diretor de fotografia:");
gets(ddfv);
printf("diretor de Sonografia:");
gets(ddsvv);
printf("ditetor de edição:");
gets(ddevv);

// impressão Copyright Video
printf("\n\n\n##################################### \n");
printf("============== SrTriste ============= \n");
printf("##################################### \n"); printf("==========Copyright Video===========\n");
printf("##################################### \n"); 
printf("Todos os direitos reservado ao produtora - %s\ncom o CNPJ - %d\nDiretor de fotografia - %s\nDiretor de Edição - %s\nDiretor de Sonografia - %s", nnpv, ccnpjv, ddfv, ddevv, ddsvv);
  
    break;
   case 4: 
    // Copyright Filme
    printf("\n\n\n##################################### \n");
printf("##################################### \n"); printf("==========Copyright Filme===========\n");
printf("##################################### \n"); 
gets(erro);
printf("nome da produtora:");
gets(nnpf);
printf("CNPJ:");
scanf("%d", &ccnpjf);
gets(erro);
printf("Nome do Filme:");
gets(nnff);
printf("Sinopse:");
gets(spf);
printf("link:");
gets(lllf);
printf("Diretor de fotografia:");
gets(dddff);
printf("Direto de Sonografia:");
gets(dddsf);
printf("Diretor de edição:");
gets(dddef);


// impressão Copyright Filme

printf("\n\n\n##################################### \n");
printf("============== SrTriste ============= \n");
printf("##################################### \n"); printf("==========Copyright Filme===========\n");
printf("##################################### \n"); 
printf("o filme - %s\nproduzido pela produtora - %s\ncom CNPJ - %d \nDiretor de Edição - %s\nDiretor de Sonografia - %s\nDiretor de Fotografia - %s\nlink - %s\nSinopse:\n%s", nnff, nnpf, ccnpjf, dddef, dddsf, dddff, lllf, spf );
break;
  }
    }
}while(registropn<9);

 }
