void main()
{
	int huiwen(int);
	int sushu(int);
	int n,m,i,k=0;
	int a[300];
	int flag=0,temp=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		flag=huiwen(i);
		if(flag==1)
		{
			flag=sushu(i);
			if(flag==1)
			{
               a[k]=i;
			   k=k+1;
			   temp=1;
			}
		}
	}
	if(temp==0)
		printf("no");
	else
	{
		for(i=0;i<k-1;i++)
			printf("%d,",a[i]);
		printf("%d",a[k-1]);
	}
}
int huiwen(int a)
{
	int temp=0;
	int x=0,b,i,t;
	if(a/10==0)
		temp=1;
	else
	{   t=a;
		for(i=0;a!=0;i++)
		{
			b=a%10;
			x=10*x+b;
			a=a/10;
		}
		if(x==t)
			temp=1;
	}
	return(temp);
}
int sushu(int a)
{
	int i;
	int temp=1;
	for(i=2;i<a/2;i++)
	{
		if(a%i==0)
		{
			temp=0;
			break;
		}

	}
	return(temp);
}