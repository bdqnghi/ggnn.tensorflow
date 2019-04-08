void main()
{
	int n,i,d=0,q,j;
	int b[101],f[101];
	char a[101][10],c[101][10],e[101][10];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s %d",a[i],&b[i]);
	}
	q=n-1;j=0;
	for(i=n-1;i>=0;i--)
	{
			if (b[i]<60)
		{
				
			    strcpy(c[q],a[i]);
			    q=q-1;
		}
		
	}
	for (i=0;i<n;i++)
	{
		if (b[i]>=60)
		{
			
			strcpy(c[j],a[i]);
			f[j]=b[i];
			d=d+1;
			j=j+1;
		}
	}
	for (i=0;i<d;i++)
	{
		for (j=0;j<d-1;j++)
		{
			if (f[j]<f[j+1])
			{
				f[100]=f[j];
				f[j]=f[j+1];
				f[j+1]=f[100];
				strcpy(c[100],c[j]);
				strcpy(c[j],c[j+1]);
				strcpy(c[1+j],c[100]);
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",c[i]);


}