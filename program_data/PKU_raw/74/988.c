void main()
{
	int m,n,i,j,flag,k,p,a[15]={0},q=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		flag=1;
		for(j=2;j<=i/2;j++)if(i%j==0)
			{flag=0;break;}
		if(flag==0)continue;
		else 
		{
		k=0;
		p=i;
		while(i>0)
			{k=k*10+i%10;i=i/10;}
		if(k==p)a[q++]=p;
		i=p;
		}
		
	}
	if(q==0)printf("no\n");
	else 
	{
	for(i=0;i<q-1;i++)printf("%d,",a[i]);
		printf("%d\n",a[i]);
	}
}