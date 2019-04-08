void main()
{
	char *p;
	p=(char *)malloc(1000*sizeof(char));
	gets(p);
	int i;
	int L=strlen(p);
	for(i=0;i<L-1;i++)
		printf("%c",*(p+i)+*(p+i+1));
	printf("%c\n",*(p+L-1)+*p);
}

