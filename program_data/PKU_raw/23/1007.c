void main()
{
	char c[100];
	int n,i,j,t;
	gets(c);
	n=strlen(c);
	t=n;
	for(i=n-1;i>=0;i--)
		if(c[i]==' ')
		{
			for(j=i+1;j<t;j++)
				printf("%c",c[j]);
            t=i;
            printf(" ");
		}
	for(j=0;j<t;j++)
		printf("%c",c[j]);
	printf("\n");
}