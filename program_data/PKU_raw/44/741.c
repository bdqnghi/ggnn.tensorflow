
int main()
{
	int reverse(int sum);
	int sum,i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&sum);
		reverse(sum);
	}
	
	
	return 0;
}

int reverse(int sum)
{
	int yushu;
	if(sum<0)
	{
		printf("-");
		sum=-sum;
	}
	if(sum==0) printf("%d",sum);
	yushu=sum%10;
	while((yushu==0)&&(sum!=0))
	{
	    sum=sum/10;
		yushu=sum%10;
	}
    
	while(sum!=0)
	{
		printf("%d",yushu);
		sum=(sum-yushu)/10;
		yushu=sum%10;
	}
	printf("\n");
	return 0;
}