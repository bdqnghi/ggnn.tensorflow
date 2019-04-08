int main()
{
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if((i%7==0)||(i%10==7)||(i/10%10==7))
		continue;
	else
		sum=sum+pow(i,2);
	printf("%d",sum);
	return 0;
}