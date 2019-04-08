void process(char *pt,int number)
{
	char *b,head;
	head=*pt;
	for(b=pt;b<pt+number-1;b++)
	{
		*b=*b+*(b+1);
	}
	*(pt+number-1)=*(pt+number-1)+head;
	for(b=pt;b<pt+number;b++)
	{
		printf("%c",*b);
	}
}
	
int main()
{
	char A[101];
	char *pt;
	int number;
	gets(A);
	number=strlen(A);
	pt=A;
	process(pt,number);
	return 0;
}