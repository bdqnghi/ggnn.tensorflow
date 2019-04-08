
int sushu(int a)
{
	int result,sq,sum=0,i;
	sq=sqrt(a);
	if(a==2||a==3)result=1;
	else if(a%2==0)result=0;
	else{
	for(i=2;i<=sq;i++)
	{
		if(i%2==1)
		{	if(a%i==0)break;
			sum++;
		}
	}
	if(sum==((sq-1)/2))result=1;
	else result=0;
	}
	return result;
}

int main()
{
		int n,i,j;
		scanf("%d",&n);
		for(i=6;i<=n;i++)
		{
		if(i%2==0)
			{
			for(j=2;j<=i/2;j++)
				if(sushu(j)&&sushu(i-j))
					{
						printf("%d=%d+%d\n",i,j,i-j);	
						break;
					}
			}
		}
		return 0;
}