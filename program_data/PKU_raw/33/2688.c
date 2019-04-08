int main()
{
	int n,i,j,m;
	char a[256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		m=strlen(a);
		for(j=0;j<m;j++)
		{
			if(a[j]=='A')
				printf("T");
			if(a[j]=='T')
				printf("A");

			if(a[j]=='C')
				printf("G");

			if(a[j]=='G')
				printf("C");
		}
		printf("\n");
	}
	return 0;
}
