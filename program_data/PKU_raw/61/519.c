int fibo(int x);
int main()
{
	int shuzu[N];
	int n,a,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(shuzu[i]));
	}
	for(i=0;i<n;i++)
	{
		a=fibo(shuzu[i]);
		printf("%d\n",a);
	}
	return 0;
}

int fibo(int x)
{
	int p=1,q=1,temp,result,k;
	if((x==1)||(x==2))
	{
		result=1;
	}
	else
	{
		for(k=x;k>2;k--)
		{
			temp=q;
			q=q+p;
			p=temp;
		}
		result=q;
	}
	return result;
}