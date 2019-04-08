int main()
{
	char a[101],b[101],c[101],d[101];
	int n,i,j,n1,n2,k,m,t;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		memset(c,0,sizeof(c));
		scanf("%s%s",a,b);
		n1=strlen(a);
		n2=strlen(b);
		for (i=0;i<n1;i++)
		{
			a[i]-='0';
		}
		for (i=0;i<n2;i++)
		{
			b[i]-='0';
		}
		if(n1-n2!=0)
		{
			for(i=0;i<(n1-n2);i++)
				d[i]=0;
		}
		for(i=n1-n2,k=0;i<n1 || k<n2;i++,k++)
			d[i]=b[k];
		for(i=1;i<=n1;i++)
		{
			if(a[n1-i]>=d[n1-i])
				c[n1-i]=a[n1-i]-d[n1-i];
			else
			{
				c[n1-i]=a[n1-i]+10-d[n1-i];
				if(a[n1-1-i]==0)
				{
					t=i;
					do
					{
						a[n1-1-i]=a[n1-1-i]+9;
						i++;
					}while(a[n1-1-i]==0);
					a[n1-1-i]--;
					i=t;
				}
				else
					a[n1-1-i]--;
			}
		}
		i=0;
		while(c[i]==0 && i<n1)
		{
			i++;
		}
		if (i==n1)
		{
			printf("0\n");
			continue;
		}
		m=i;
		for(i=m;i<n1;i++)
			printf("%d",c[i]);
		printf("\n");
	}
	return 0;
}