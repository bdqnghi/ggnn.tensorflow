int main()
{
	char str[10]={0},substr[5]={0};
	while(scanf("%s",str)!=EOF)
	{
		scanf("%s",substr);
		int i,k,u;
		for(u=0;u<=9;u++)
		{
			if(!str[u])
				break;
		}
		k=0;
		for(i=1;i<=u-1;i++)
		{
			if(str[k]<str[i])
			{
				k=i;
			}
		}
		for(i=0;i<=k;i++)
			printf("%c",str[i]);
		for(i=0;i<=2;i++)
			printf("%c",substr[i]);
		for(i=k+1;i<=u-1;i++)
			printf("%c",str[i]);
		printf("\n");
	}
	return 0;
}