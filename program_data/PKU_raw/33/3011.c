int main()
{
	int n,i,r,j,k;
	char a[1000]={0};
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%s",&a);
		for (j=0;j<255;j++)
		{
			if (a[j]=='A')
			{
				printf("T");
			}
			if (a[j]=='T')
			{
				printf("A");
			}
	 		if (a[j]=='G')
			{
				printf("C");
			}
			if (a[j]=='C')
			{
				printf("G");
			}
			if (a[j]==0)
			{
				break;
			}
		}
		printf ("\n");
	}
	return 0;
}