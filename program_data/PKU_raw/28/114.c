void main()
{
	char a[3000];
	int i,l,x[300]={0},xn=0;
	gets(a);
	l=strlen(a);
	for (i=0;i<l;i++)
	{
		if (a[i]==' ')
		{
			xn++;
		}
		else
		{
			x[xn]++;
		}
	}
	printf("%d",x[0]);
	for (i=1;i<=xn;i++)
		if (x[i]!=0) printf(",%d",x[i]);
}
