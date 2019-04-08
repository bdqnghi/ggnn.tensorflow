int len(int x)
{
	int i,k=0;
	for(i=1;i<=10;i++)
	{
		if(x!=0)
		{
			x=(x-x%2)/2;
			k+=1;
		}
		else break;
	}
	return k;
}
int ch(int x,int y)
{
	int i,n;
	n=len(x);
	for(i=1;i<=n-y;i++)
	{
		x=(x-x%2)/2;
	}
	return x;
}
int main()
{
	int x,y,m,n,i,a,s,same;
	scanf("%d %d",&x,&y);
	m=len(x);
	n=len(y);
	if(m>n)a=n;
	else a=m;
	for(i=a;i>=1;i--)
	{
		x=ch(x,i);
		y=ch(y,i);
		if(x==y)
		{
			printf("%d",x);
			break;
		}
	}
	return 0;
}