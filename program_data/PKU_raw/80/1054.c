int runnian(int y)
{
	int t;
	if(y%4==0&&y%100!=0||y%400==0)
		t=1;
	else t=0;
	return t;
}

int main()
{
	int i,y1,y2,m1,m2,d1,d2,sum=0;
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	for(i=y1;i<y2;i++)
	{
		sum+=365+runnian(i);

	}
		for(i=1;i<m1;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
				sum-=31;
			if(i==4||i==6||i==9||i==11)
				sum-=30;
			if(i==2)
			{
				if(runnian(y1))
					sum-=29;
				else sum-=28;
			}
		}
		for(i=1;i<m2;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
				sum+=31;
			if(i==4||i==6||i==9||i==11)
				sum+=30;
			if(i==2)
			{
				if(runnian(y2))
					sum+=29;
				else sum+=28;
			}
		}
		sum=sum+d2-d1;
		printf("%d",sum);
		return 0;
}
		