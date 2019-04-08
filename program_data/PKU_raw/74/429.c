void main()
{
	int hui(int x);
	int su(int x);
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
		if(hui(i)==1&&su(i)==1)
		{
			printf("%d",i);break;
		}
	if(i==n+1)
		printf("no");
	else
	{
		for(i=i+1;i<=n;i++)
		if(hui(i)==1&&su(i)==1)
		printf(",%d",i);
	}
}
int hui(int x)
{
	int i,j,k,m,n,a[100],sum=0;
	k=x;
	for(i=0;;i++)
		if(pow(10,i)>x)
		break;
	m=i;
	for(i=1;i<=m;i++)
	{
		a[i]=x%10;
		x=x/10;
	}
	for(i=1;i<=m;i++)
		sum=sum*10+a[i];
	if(sum==k)
		return(1);
	else return(0);
}
int su(int x)
{
	int i,j,k;
	for(i=2;i<x;i++)
		if(x%i==0)
			break;
	if(i==x)
		return(1);
	else return(0);
}

		
	
	