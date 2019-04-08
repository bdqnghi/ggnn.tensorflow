void main()
{
	char str[100][50]={'\0'};
	char (*p)[50];
	int i=0,j;
	while(scanf("%s",str[i])!=EOF)
	{
		i++;
	}
	p=str;
	for (j=i-1;j>=1;j--)
		printf("%s ",p[j]);
	printf("%s",p[0]);
}

