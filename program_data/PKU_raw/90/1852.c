
int reverse (int m,int n)
{
	int back=0;
	if((m==1 || n==1)||(m==0))
	{
		back=1;
		return 1;
	}
	if(m>=n)
	{
		back += reverse(m-n,n);
		back += reverse(m,n-1);
	}
	else if(m<n)
	{
		back += reverse(m,n-1);
	}
	return back;
}

int main()
{
	int a,b,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",reverse(a,b));
	}
	return 0;
}
