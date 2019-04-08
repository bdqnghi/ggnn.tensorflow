void main()
{
	int x,y;
	int i,k,j;
	int n=0,m=0;
	int a[10],b[10];
	scanf("%d %d",&x,&y);
	if(x%2==0)
	{
		a[0]=x;
		for(i=1;a[i-1]!=1;i++)
		{
			if(a[i-1]%2==0)
			{
				a[i]=a[i-1]/2;
			}
			else
			{
				a[i]=(a[i-1]-1)/2;
			}
			n++;
		}
	}
	else
	{
		a[0]=x;
          for(i=1;a[i-1]!=1;i++)
		{
			if(a[i-1]%2==0)
			{
				a[i]=a[i-1]/2;
			}
			else
			{
				a[i]=(a[i-1]-1)/2;
			}
			n++;
		}
	}
	if(y%2==0)
	{
		b[0]=y;
		for(i=1;b[i-1]!=1;i++)
		{
			if(b[i-1]%2==0)
			{
				b[i]=b[i-1]/2;
			}
			else
			{
				b[i]=(b[i-1]-1)/2;
			}
			m++;
		}
	}
	else
	{
		b[0]=y;
          for(i=1;b[i-1]!=1;i++)
		{
			if(b[i-1]%2==0)
			{
				b[i]=b[i-1]/2;
			}
			else
			{
				b[i]=(b[i-1]-1)/2;
			}
			m++;
		}
	}


	for(j=0;j<=n;j++)
	{
		for(k=0;k<=m;k++)
		{
			if(a[j]==b[k])
				goto label;
		}
	}
     label:
	printf("%d\n",b[k]);

}
