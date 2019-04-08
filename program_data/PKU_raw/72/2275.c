int main()
{
	int num[20][21]={0},*p=&num[0][0],m,n,i,k,flag=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(k=0;k<n;k++)
			scanf("%d",p+21*i+k);
	}
	if(num[0][0]>=num[0][1]&&num[0][0]>=num[1][0])
	{
		printf("0 0");
		flag=1;
	}
	for(k=1;k<n;k++)
	{
		if(*(p+k)>=*(p+k+1)&&*(p+k)>=*(p+k-1)&&*(p+k)>=*(p+21+k))
		{
			if(flag)printf("\n");
			printf("0 %d",k);
			flag=1;
		}

	}
	for(i=1;i<m-1;i++)
	{
		for(k=0;k<n;k++)
		{
			if(*(p+21*i+k)>=*(p+21*i+k+1)&&*(p+21*i+k)>=*(p+21*i+k-1)&&*(p+21*i+k)>=*(p+21*(i-1)+k)&&*(p+21*i+k)>=*(p+21*(i+1)+k))
			{
				if(flag)printf("\n");
				printf("%d %d",i,k);
				flag=1;
			}
		}
	}
	for(k=0;k<n;k++)
		if(*(p+(m-1)*21+k)>=*(p+(m-1)*21+k+1)&&*(p+(m-1)*21+k)>=*(p+(m-1)*21+k-1)&&*(p+(m-1)*21+k)>=*(p+(m-2)*21+k))
		{
			if(flag)printf("\n");
			printf("%d %d",m-1,k);
			flag=1;
		}
	return 0;
}