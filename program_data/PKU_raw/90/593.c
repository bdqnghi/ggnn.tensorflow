int f(int n1,int n2,int n3)
{
	int an=0,i;
	if(n1==0||n1==1) an=1;
	else
	{
	if(n2==1) an=0;
	if(n2==2)
	{
		if(n1%2==0)
		{
		for(i=n3;i>=n1/2;i--)
		{
			an=an+1;
		}
		}
		else{
			for(i=n3;i>n1/2;i--)
		{
			an=an+1;
		}
		}
	}
	else
	{   
		if(n1%n2==0)
		{
		for(i=n3;i>=n1/n2;i--)
		{
			if(n1-i<i)
			{
			an=an+f(n1-i,n2-1,n1-i);
			}
			else an=an+f(n1-i,n2-1,i);
		}
		}
		else
		{
           for(i=n3;i>n1/n2;i--)
		{
			if(n1-i<i)
			{
			an=an+f(n1-i,n2-1,n1-i);
			}
			else an=an+f(n1-i,n2-1,i);
		}
		}
	}
	}
	return an;
}
int main()
{
	int n,i,a[100]={0},b[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",f(a[i],b[i],a[i]));
	}
}
