void main()
{
	int i,j,n,a[100000],m,t,b[1000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		a[i]=i;
	a[1]=0;
    if(n<=2) printf("empty\n");
	else if(n>2)
	{
	for(i=2;i<sqrt(n);i++)
		for(j=i+1;j<=n;j++)
		{
			if(a[i]!=0&&a[j]!=0)
				if(a[j]%a[i]==0)
					a[j]=0;}
		j=1;
		for(i=1;i<=n;i++)
			if(a[i]!=0)
			{
				b[j]=a[i];
				j++;
			}
			m=j;t=0;
			for(i=1;i<m;i++)
				if(b[i+1]-b[i]==2)	
				{t=1;break;}
			if(t==0)	printf("empty\n");
			else 
			{
				for(i=1;i<m;i++)	
					if(b[i+1]-b[i]==2)	printf("%d %d\n",b[i],b[i+1]);}
	}

}