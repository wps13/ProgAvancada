char* sobrenome(char *nome){
		char * sobre=nome;
while(*sobre != ‘ ‘){
			sobre++;
		}
while(*sobre == ‘ ‘){
	sobre++;
}
		return (sobre); 
	}

Int main(void){
  char nome[80];
  char *p;
  puts(“NOME e sobrenome: ”);
  gets(nome);
  printf(“Tamanho = %d\n”, strlen(nome));
  puts(nome);
  p=sobrenome(nome);
  puts(p);
  return 0;
}
