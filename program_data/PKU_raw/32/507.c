void main()
{
	int n,i,j,k,t,r,c[100];
	char a[100],b[100];
	scanf("%d",&n);
	while(n--)
	{
		
		scanf("%s",a);
		scanf("%s",b);
		r=strlen(a);
		t=strlen(b);
		for(i=0;i<r;i++)
			a[i]=a[i]-'0';
		for(i=0;i<t;i++)
			b[i]=b[i]-'0';
		for(i=r-1,j=t-1;j>=0;i--,j--)
		{
			if(a[i]>=b[j])
				c[i]=a[i]-b[j];
			else
			{
				a[i-1]=a[i-1]-1;
				c[i]=a[i]+10-b[j];
			}
		}
		for(i=0;i<r-t;i++)
			c[i]=a[i];
		for(i=r-1;i>0;i--)
		{
			if(c[i]<0)
			{
				c[i-1]=c[i-1]-1;
				c[i]=c[i]+10;
			}
		}
		if(c[0]>0)
			printf("%d",c[0]);
		for(i=1;i<r-1;i++)
			printf("%d",c[i]);
		printf("%d\n",c[r-1]);
	}
}