int main()
{
    int n,i,sum=0;
	scanf("%d%d%d",&n,&i,&sum);
	for(i=1;i<=n;i++)
	{
		if(i%7!=0 &&(i-(i/10)*10)!=7 && i/10!=7)
      sum=sum+i*i;
	}
	printf("%d",sum);
	return 0;
}