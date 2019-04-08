
void main()
{
	int m,i,t,j,k,p,a;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		a=1;
		t=i;p=m-i;
		for(j=2;j<=t/2;j++)
		{
			if(t%j==0)
			{a=0;
			break;}
		}
		for(k=2;k<=p/2;k++)
		{
			if(p%k==0)
			{a=0;
			break;}
		}
		if(a)
		printf("%d %d\n",t,p);
	}
	
}