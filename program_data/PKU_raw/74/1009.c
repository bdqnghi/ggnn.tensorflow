void main()
{
	int sushu(int s);
	int huiwen(int s);
	int m,n,i,t;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		t=i;
		if(sushu(i)>0&&huiwen(i)>0)
		{printf("%d",i);break;}
		
	}
	if(t==n&&huiwen(t)==0)
		printf("no");
	
	if(t<n)
	{
		for(i=t+1;i<=n;i++)
		{
			if((sushu(i)>0)&&(huiwen(i)>0))
				printf(",%d",i);
		}
	}



}
int sushu(int s)
{
	int j;
	double k;
	k=sqrt(s);
	for(j=2;j<=k;j++)
	{
		if(s%j==0)
		{
			return(0);break;
		}
	}
	if(j>k)
	return(1);
}
int huiwen(int s)
{
	int a[10],z=0,i;
	while(s/10>0)
	{
		a[z]=s%10;
		s=s/10;
		z++;
	}
	a[z]=s;
	for(i=0;i<=z/2;i++)
	{
		if(a[i]!=a[z-i])
		{return(0);break;}
	}
	if(i>z/2)
	return(1);
}


