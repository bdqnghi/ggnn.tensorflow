void main()
{
	char str[][50]={'\0'};
	int a,b;
	int i=0,j;
a=1;b=1;
a=a*b;
	while(scanf("%s",str[i])!=EOF)
	{
		i++;
	}
	for (j=i-1;j>=1;j--)
		printf("%s ",str[j]);
	printf("%s",str[0]);
}
