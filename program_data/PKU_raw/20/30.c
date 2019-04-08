int main()
{
	int i,max,maxi;
	char str[10],substr[4];
	while(scanf("%s %s",str,substr)!=EOF)
	{
		max=maxi=0;
		for(i=0;str[i]!=0;i++)
		{
			if(str[i]>max)
			{
				max=str[i];
				maxi=i;
			}
		}	
		for(i=0;i<=maxi;i++)
			printf("%c",str[i]);
		printf("%s",substr);
		for(;str[i]!=0;i++)
			printf("%c",str[i]);
		printf("\n");
	}
	return 0;
}
