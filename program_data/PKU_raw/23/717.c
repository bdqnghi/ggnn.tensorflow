void main()
{
	char *a;
	int i,j,k,m,n,t;
	a=(char *)malloc(1000*sizeof(char));
	gets(a);
	n=strlen(a);
	for(i=n-1;i>-1;i--)
		*(a+i+1)=*(a+i);
	*(a+n+1)=' ';
	*(a+n+2)='\0';
	*a=' ';
	for(i=n;i>=0;i--)
	{
		if(*(a+i)==' ')
		{
			for(j=i+1;*(a+j)!=' ';j++)
				printf("%c",*(a+j));
			if(i!=0)
				printf(" ");
		}
	}
}