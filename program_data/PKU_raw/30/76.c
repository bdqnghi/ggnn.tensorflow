void main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i/100)!=7&&(i/10)%10!=7&&(i%7!=0)&&i!=7&&(i/10)!=7&&(i-i/10*10)!=7) sum+=i*i;
	}
	printf("%d",sum);
}

