
int compare(char a[],char b[],int x)
{
	int i,l;
	l=strlen(a);
	for (i=0;i<l;i++)
	{
		if (a[i]==b[i+x])
			continue;
		else
			return 0;
	}
	return 1;
}

void main()
{
	int i,l,m;
	char a[51],b[51];
	scanf ("%s %s",a,b);
	l=strlen(a);
	m=strlen(b);
	for (i=0;i<=m-l;i++)
	{
		if (compare(a,b,i)==1)
		{
			printf ("%d\n",i);
			break;
		}
	}
}