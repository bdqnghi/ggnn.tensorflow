int main()
{
	char zfc[3];
	gets(zfc);
	int n=atoi(zfc),i;
	for(i=0;i<n;i++){
		char dna[256], dna2[256];
		scanf("%s",dna);
		char *p1=dna,*p2=dna2;
		for(;*p1!='\0';p1++,p2++){
			if(*p1=='A') *p2='T';
			if(*p1=='T') *p2='A';
			if(*p1=='C') *p2='G';
			if(*p1=='G') *p2='C';
		}
		*p2='\0';
		p2=dna2;
		printf("%s\n",p2);
	}
	return 0;
}