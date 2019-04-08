void main()
{
	int m1,m2,n,k=1,p,i;
	char a[100],b[100],c[100],d[100];
	scanf("%d",&n);
	while(k<=n)
	{
		scanf("%s",a);
		scanf("%s",b);
		k++;
		m1=strlen(a);m2=strlen(b);
		for(i=0;i<=m1;i++)
		a[i]=a[i]-48;
		for(i=0;i<=m2;i++)
			b[i]=b[i]-48;
		p=m1-m2;
		for(i=0;i<m2;i++)   c[i+p]=b[i];
		for(i=0;i<p;i++) c[i] = 0;
		for(i=m1-1;i>=0;i--)
		{
			if(a[i]>=c[i]) d[i]=a[i]-c[i];
			else
			{
			    d[i]=a[i]+10-c[i];   a[i-1]=a[i-1]-1;
			}
		}
		for(i=0;i<m1;i++)
           printf("%d",d[i]);
        printf("\n");
	}
}

