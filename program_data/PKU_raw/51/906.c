
int main()
{
	int n;
	int i,j,l,k=0;
	char s[600];
	char a[500][6];
	int b[500];
	scanf ("%d",&n);
	getchar();
	gets(s);
	l=strlen(s);
	for (i=0;i<l-n+1;i++)
	{
		for (j=0;j<n;j++)
			a[k][j]=s[i+j];
		k++;
	
	}
	for (i=0;i<l-n;i++)
	{
		int p=1;
		for (j=i+1;j<l-n+1;j++)
		{
			if (strcmp(a[i],a[j])==0)
				p++;
		}
		b[i]=p;
	}
	int m=0;
	for (i=0;i<l-n;i++)
	{
		if (b[i]>m)
			m=b[i];
	}
	if (m==1)
		printf ("NO");
	else
	{
		printf ("%d\n",m);
		for (i=0;i<l-n;i++)
		{
			if (b[i]==m)
			{
				puts(a[i]);
				printf ("\n");
			}

		}
	}
	return 0;
}