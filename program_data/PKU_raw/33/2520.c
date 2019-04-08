int main()
{
	int n,i;
	char dna[256];
	gets(dna);
	n=atoi(dna);
	for(i=1;i<=n;i++){
		gets(dna);
		char *p=dna;
		char *q;
		char cdna[256]={'\0'};
		char *c=cdna;
		q=p;
		for(p=q;*p!='\0';p++){
			if(*p=='A'){
				*c='T';
				c++;
			}else if(*p=='T'){
				*c='A';
				c++;
			}else if(*p=='G'){
				*c='C';
				c++;
			}else if(*p=='C'){
				*c='G';
				c++;
			}
		}
		printf("%s\n",cdna);
	}
	return 0;
}