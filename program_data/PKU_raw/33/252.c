

int main()
{
	int n;
	scanf("%d",&n);
	while (n--)
	{
		char a[500];
		scanf("%s",&a);
		int LL = strlen(a);
		for (int i=0; i<LL;i++ )
		{
			if (a[i]=='A')
				printf("T");
			if (a[i]=='T')
				printf("A");
			if (a[i]=='G')
				printf("C");
			if (a[i]=='C')
				printf("G");
		}
		printf("\n");
	}
	return 0;
}