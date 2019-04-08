void main()
{
	char a[200]={0},b[100][100]={0};
	gets(a);
	int i,n,m=0,k=0,j;
	n=strlen(a);
	for(i=0;i<n;i++)
	{if(i==n-1)
		{
			for(j=i-m;j<=i;j++)
				b[k][j+m-i]=a[j];
			k=k+1;
			m=0;
		}
	else
	{
		if(a[i]!=32)
		{
	
		m=m+1;
		
	
		}
		else 
		{
			for(j=i-m;j<i;j++)
				b[k][j+m-i]=a[j];
			k=k+1;
			m=0;
		}
	}
	}
	printf("%s",b[k-1]);
	for(i=k-2;i>=0;i--)
	printf(" %s",b[i]);

}