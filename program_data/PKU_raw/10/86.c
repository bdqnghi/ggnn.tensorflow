
int max(int x,int y)
{
	int z;
	if(x>=y)
		z=x;
	else
		z=y;
	return (z);
}

int MAX_multi(int str[25],int n)
{
	int t=0,i;
	for(i=0;i<n;i++)
	{
		t=max(t,str[i]);
	}
	return (t);
}

void count(int str[25],int num[25],int n)
{
	int i,j;
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>i;j--)
		{
			if(str[i]>=str[j])
				num[i]=max(num[i],num[j]+1);
		}
	}
	printf("%d\n",MAX_multi(num,n));
}

void main()
{
	int n,i,str[25],num[25]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&str[i]);
	count(str,num,n);
}
