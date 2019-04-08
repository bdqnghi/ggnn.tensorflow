void main()
{
	int n,m,i,j,a[300];
	int *p,*end;
	scanf("%d%d",&n,&m);
	while(m||n)
	{
		if(n==1)
		{printf("1\n");
		goto loop;
		}
		end=a+n;
		for(p=a;p<end;p++)
			*p=1;
		p=a-1;
		for(i=1;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				p++;
				if(p>=end)p-=n;
				if(*p==0)j--;
			}
			*p=0;
		}
		
     for(i=1;i<=n;i++)
			if(a[i-1]!=0)printf("%d\n",i);
loop:scanf("%d%d",&n,&m);
	}

}
			