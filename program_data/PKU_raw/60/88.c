void main()
{
	int n,m,k,i,j,r,c,q=0,p=0;
	int a[2000];
	scanf("%d",&n);
	for(i=3;i<=n;i=i+2)
	{
		c=1;
		for(j=2;j<=i/2;j++)
		{
			r=i%j;
			if(r==0) {c=0;break;}
		}
		if(c==1)
		{
			a[p]=i;
			p++;
		}
	}
	for(i=0;a[i];i++)
	{
		if(a[i+1]-a[i]==2)
		{
			printf("%d %d\n",a[i],a[i+1]);
			q++;
		}

	}
	if(q==0)printf("empty");

}