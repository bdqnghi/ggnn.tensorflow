void main()
{
	int m,n,i,j,k,p,q,r,s,t,b,c=0,a[1000]={0};
    scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=i/2;j++)
		{	if(i%j!=0)
				k=1;
			else {k=0;break;}
		}
		if(k==1)
		{
			r=i;b=i;t=b%10;
			for(p=1;r!=0;p++)
				r=r/10;
            for(j=1;j<p-1;j++)
			{
				b=b/10;
			    t=t*10+b%10;
			}
			if(i==t)
			{a[c]=i;c++;}
		}
	}
	if(a[0]==0)
		printf("no\n");
	else
	{
		for(j=0;j<c-1;j++)
			printf("%d,",a[j]);
		printf("%d",a[c-1]);
	}
}
