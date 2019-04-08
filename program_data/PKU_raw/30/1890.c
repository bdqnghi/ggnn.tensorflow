int main(int argc, char* argv[])
{
	int m;
	int sum=0;
	int i;
	scanf("%d",&m);

	for(i=1;i<=m;i++)
	{
		if(i%10==7||i/10==7||i%7==0)
			sum+=i*i;
	}
	
	int SUM=0;
	int n;
	for(n=0;n<=m;n++)
	{
		SUM+=n*n;
	}
	printf("%d",SUM-sum);
	return 0;
	
}
