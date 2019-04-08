void main()
{
	char c;
	int i=0,j,k,t;
	char str[30][30];
	do
	{
		scanf("%s",str[i]);
		i++;
	}while((c=getchar())!='\n');
	t=i;
	printf("%s",str[t-1]);
	for(i=t-2;i>=0;i--)
	printf(" %s",str[i]);
}
