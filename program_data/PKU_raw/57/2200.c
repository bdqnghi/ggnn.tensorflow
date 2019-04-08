int f(char c[50])
{
	int z=0,l;
	l=strlen(c);
	if (c[l-2]=='e' && c[l-1]=='r')
		z=2;
	if (c[l-2]=='l' && c[l-1]=='y')
		z=2;
	if (c[l-3]=='i' && c[l-2]=='n' && c[l-1]=='g')
		z=3;
	return z;
}
void main()
{
	int n,i,j,l;
	char a[50][50];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%s",a[i]);
	}
	for (i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if (f(a[i])==2)
		{
			for (j=0;j<l-2;j++)
				printf("%c",a[i][j]);
			printf("\n");
		}
		if (f(a[i])==3)
		{
			for (j=0;j<l-3;j++)
				printf("%c",a[i][j]);
			printf("\n");
		}
	}
}
