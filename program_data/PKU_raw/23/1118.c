
void main()
{
	int n,i,j;
	char str[10000],*p=str;
	gets(p);
	n=strlen(p);
	*(p+n)=' ';
	for(i=n-1;i>=0;i--)
	{
		if(*(p+i)==' ')
		{
			for(j=i+1;*(p+j)!=' ';j++)
				printf("%c",*(p+j));
			printf(" ");
		}
	}
	for(j=0;*(p+j)!=' ';j++)
		printf("%c",*(p+j));	
}