int main ()
{
	int y,m,d,sum=0;
    scanf("%d%d%d",&y,&m,&d);
	for(int i=1;i<m;i++)
	{
		if
			(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{sum+=31;
	}
	else if
		(i==4||i==6||i==9||i==11)
	{
		sum+=30;
	}
		if(i==2&&y%400==0||y%4==0&&y%100!=0)
		{
			sum=sum+29;}
		else if (i==2)
			sum+=28;
	}
	sum=sum+d;
	printf("%d",sum);
	return 0;
}