void main()
{
	int zhishu(int i);
	long n;
	long num;
	int i;
	scanf("%d",&n);
	for(num=6;num<=n;num=num+2)
	{
	printf("%d=",num);
	if(zhishu(num-2)==1) printf("%d+%d\n",2,num-2);
	else if(sqrt(num)>=3)
	{
		for(i=3;i<=num/2;i=i+2)
		{
			if(zhishu(i)==1&&zhishu(num-i)==1)
			{
				printf("%d+%d\n",i,num-i);
				break;
			}
		}
	}
	else if(sqrt(num)<3)
	{
		for(i=3;i<=num/2;i=i+2)
		{
			if(zhishu(i)==1&&zhishu(num-i)==1)
			{
				printf("%d+%d\n",i,num-i);
				break;
			}
		}
	}
	}
}
int zhishu(int i)
{
	int j;
	if(i==2) return 1;
	else if(i%2==0&&i!=2) return 0;
	else for(j=3;j<i/2;j=j+2)
	{
		if(i%j==0)
		{
			return 0;
			break;
		}
	}
	if(j=i/2+1) return 1;
}


