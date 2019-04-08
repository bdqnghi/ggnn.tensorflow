int huiwen(int a)
{
	int i,j=0,flag=1,b[10];
	while(a!=0)
	{
		b[j]=a%10;
		a=a/10;
		j++;//??
	}
	for(i=0;i<j-i;i++)
	{
		if(b[i]!=b[j-i-1])
		{
			flag=0;
			break;
		}
	}

	return flag;
}
int sushu(int n)
{
	int i,flag=1;
	
		for (i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}

	return flag;
}
int main()
{
	int m,n,i,a[100],t=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(huiwen(i)==1&&sushu(i)==1)
		{a[t]=i;t++;}
	}
    if(t==0)
		printf("no");
	else 
	{
		printf("%d",a[0]);
		for(i=1;i<t;i++)
		printf(",%d",a[i]);
	}

	return 0;
}