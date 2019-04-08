int main()
{
	int x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int	y[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int Y,M,D,sum=0,i;
	scanf("%d %d %d",&Y,&M,&D);
	if((Y%4==0&&Y%100!=0)||Y%400==0)
	{
		for(i=1;i<=M-1;i++)
		{sum+=y[i-1];}
		sum=sum+D;
	}
	else
	{
	    for(i=1;i<=M-1;i++)
		{sum+=+x[i-1];};
		sum=sum+D;
	}
        printf("%d",sum);
		return 0;
}