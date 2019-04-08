int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	char a[50][10000];
	int i;
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<n;i++)
	{
		int j;
		int len=strlen(a[i]);
		if(a[i][len-2]=='e' && a[i][len-1]=='r' || a[i][len-2]=='l' && a[i][len-1]=='y')
		{
			for(j=0;j<len-2;j++)
				putchar(a[i][j]);
		}
		if(a[i][len-3]=='i' && a[i][len-2]=='n' && a[i][len-1]=='g' )
		{
			for(j=0;j<len-3;j++)
				putchar(a[i][j]);
		}
		printf("\n");
	}
	return 0;
}