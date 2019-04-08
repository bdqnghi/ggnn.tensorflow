int main()
{
	int w,days[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,j,date[12]={0};
	scanf("%d",&w);
	date[0]=w+5;
	while(date[0]>7)
	{
		date[0]=date[0]-7;
	}
	for(i=1;i<12;i++)
	{
		date[i]=(days[i-1]%7)+date[i-1];
		while(date[i]>7)
		{
			date[i]=date[i]-7;
		}
	}
	for(i=0;i<12;i++)
	{
		if(date[i]==5)
		{
			printf("%d\n",i+1);
		}
	}
	return 0;
}
