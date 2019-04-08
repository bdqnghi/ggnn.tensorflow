int main()
{
	int n,j,k;
	char a[300],in;
	scanf("%d",&n);
	scanf("%c",&in);
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=299;j++)
		{
			scanf("%c",&a[j]);
			if(a[j]==10)
			{
				k=j;
				break;
			}
		}
		for(j=1;j<=k-1;j++)
		{
			if(a[j]=='A')printf("T");
			if(a[j]=='C')printf("G");
			if(a[j]=='G')printf("C");
			if(a[j]=='T')printf("A");
		}
		printf("\n");
	}
	return 0;
}



		

