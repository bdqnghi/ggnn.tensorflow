int main()
{
	int a[6],i,j,k,t;
	long sum;
	while(t<1000)
	{
		sum=0;
		for(i=0;i<6;i++)
		{
			scanf("%d",&a[i]);
		}
		if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0)break;
		a[3]=a[3]+12;
		sum=(a[3]-a[0])*60*60+(a[4]-a[1])*60+(a[5]-a[2]);
		printf("%ld\n",sum);
	}
	return 0;
}