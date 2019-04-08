int panduansushu(int t)
{
	int i;
	for(i=2;i<t;i++)
	{
		if(t%i==0){break;}
	}
	if(i>t/2)return 1;
	else return 0;	
}

int sum=0;
void fun(int n,int i)
{
	if(n==1)sum++;
	for(;i<=n;i++)
	{
		if(n%i==0)fun(n/i,i);
	}
}

void main()
{
	int a[100],i,res,j,n;
	scanf("%d",&n);
	for(j=0;j<n;j++)scanf("%d",&a[j]);
	for(j=0;j<n;j++)
	{
		if(panduansushu(a[j])==1)
		{
			printf("1\n");
		}
		else{ for(i=2,res=1;i<a[j]/2;i++)
		{
			if(a[j]%i==0){sum=0;fun(a[j]/i,i);res+=sum;}

		}
		printf("%d\n",res);}}
}