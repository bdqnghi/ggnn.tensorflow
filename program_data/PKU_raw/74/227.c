void main()
{
	int su(int x);
    int hw(int y);
    int m,n,i,sum=0;
	int b[100]={0};
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{	
	if(su(i)!=0&&hw(i)!=0)
	{
		b[sum]=i;
	    sum++;
	}
	}
	
	if(sum==0)
		printf("no");
	else
	{
    for(i=0;i<sum-1;i++)
		printf("%d,",b[i]);
	printf("%d",b[sum-1]);
	}
}

int su(int x)
{
	int i,flag=1;
	for(i=2;i<=sqrt(x);i++)
	{
		flag=x%i;
		if(flag==0)
			break;
	}
	return(flag);
}

int hw(int y)
{
	int a[100],i=0,l,flag,mul=1;
	while(y>0)
	{
		a[i]=y%10;
		y=(y-a[i])/10;
		i++;
	}
	l=i;
	for(i=0;i<l/2;i++)
	{
		if(a[i]==a[l-i-1])
			flag=1;
		else
			flag=0;
		mul*=flag;
	}
	return(mul);
}










