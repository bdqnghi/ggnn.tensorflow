void main()
{
	char ss[10000];
	int len,i,k=1;
	int a[301];
	gets(ss);
	len=strlen(ss);
	a[1]=0;
	for (i=0;i<len;i++)
	{
		if (ss[i]==' ' && ss[i+1]!=' ')
		{
			k++;
			a[k]=0;
		}
		if (ss[i]!=' ')
		a[k]++;
	}
	for (i=1;i<=k;i++)
	{
		printf("%d",a[i]);
		if (i!=k)
			printf(",");
	}
}
