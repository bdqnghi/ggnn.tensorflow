int main()
{
	int zhi(long int r),hui(long int r);
	long int m,n,t=0,n1,n2,u=0,i;
	int a[1000];
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		n1=zhi(i);
		n2=hui(i);
		if(n1==0&&n2==0)
		{a[t]=i;t++;u=t;}
	}
	if(u==0)printf("no");
	else
	{
	for(t=0;t<u-1;t++)
		printf("%d,",a[t]);
            printf("%d",a[u-1]);
	
	}
}

int zhi(long int m)
{
	long int i,k,z=1;
	k=sqrt(m);
	for(i=2;i<=k;i++)
		if(m%i==0)break;
	if(i>k)z=0;
	return z;
}

int hui(long int m)
{
	long int a[200];
	long int n,num,t=0,k,r;
	num=log10(m);
	for(n=0,k=num;n<=num;n++)
	{
		r=pow(10,k);
		a[n]=m/r;
		m=m-a[n]*r;
		k--;
	}
	for(n=0;n<=num/2;n++)
		if(a[n]!=a[num-n]){t=1;break;}
	return t;
}