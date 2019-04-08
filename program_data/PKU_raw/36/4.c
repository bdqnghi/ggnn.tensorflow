void main()
{
	int a1[123]={0},a2[123]={0},i,j;
	char c1[50]={0},c2[50]={0};
	scanf("%s",c1);
	scanf("%s",c2);
	if(strlen(c1)!=strlen(c2))
		printf("NO\n");
	else
	{
			for(i=0;i<=strlen(c1)-1;i++)
			{
				a1[c1[i]]=a1[c1[i]]+1;
				a2[c2[i]]=a2[c2[i]]+1;
			}
		for(i=0;i<=122;i++)
		{
			if(a1[i]!=a2[i])
			{
				printf("NO\n");
				break;
			}
		}
		if(i==123)
			printf("YES\n");
	}
}