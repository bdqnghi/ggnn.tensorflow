int main()
{
	int n,i,sum;
	sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0) sum=sum+0;
		else if(i%10==7) sum=sum+0;
		else if((i-i%10)/10==7) sum=sum+0;
		else sum=sum+i*i;
	}
	printf("%d\n",sum);
	return 0;
}