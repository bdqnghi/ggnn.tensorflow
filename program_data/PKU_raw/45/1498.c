int main()
{
	char s[50],w[50],c[50];
	scanf ("%s",s);
	scanf ("%s",w);
	int n=strlen (s);
	int m=strlen (w);
	int i,j;
	int l=1;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			c[j]=w[j+i];
		}
		c[j]='\0';
		l=strcmp(s,c);
		if (l==0)
			break;
	}
	printf("%d",i);
	return 0;
}