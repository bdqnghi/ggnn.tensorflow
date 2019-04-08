void main()
{
	int n,i,j,x;
	char a[100],b[100]="\0";
	gets(a);
	n=strlen(a);
	x=n;
	for(j=n-1;j>=0;j--)
	{
		if (a[j]==' ')
		{
			for (i=j+1;i<x;i++)
			{
				b[n-x-1+i-j]=a[i];	
			}
			x=j;
			b[n-1-j]=a[j];
		}
	}
	if (j<0)
		for (i=0;i<x;i++)
			b[n-x+i]=a[i];
	printf("%s",b);
}