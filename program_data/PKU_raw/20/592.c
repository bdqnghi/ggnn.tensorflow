void main()
{
	char str[11],substr[4],*p;
	int i,j,m;
	while(scanf("%s %s",str,substr)!=EOF)
	{
		m=0;
		p=&str[0];
		for(i=1;*(p+i)!='\0';i++)
		{
			if(*(p+i)>*(p+m))
				m=i;
		}
		for(j=0;j<=m;j++)
			printf("%c",str[j]);
		printf("%s",substr);
		for(j=m+1;*(p+j)!='\0';j++)
			printf("%c",str[j]);
		printf("\n");
	}
}