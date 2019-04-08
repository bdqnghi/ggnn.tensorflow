int main()
{
	int n,i;
	scanf("%d",&n);
	char a[1000][256];
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
		for(int j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]=='A')
			{
				printf("T");
			}
			if(a[i][j]=='T')
			{
				printf("A");
			}
			if(a[i][j]=='G')
			{
				printf("C");
			}
			if(a[i][j]=='C')
			{
				printf("G");
			}
		}
		printf("\n");
	}
	return 0;
}