int runnian(int y)
{
	int i=0;
	if ((y%4==0&&y%100!=0)||(y%400==0))
		i=1;
	return i;
}
int rizi(int y,int m,int d)
{
	int sum,i;
	sum=d;
	for (i=1;i<m;i++)
	if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			sum+=31;
		else
			if (i==2)
				sum=sum+28+runnian(y);
			else
				sum+=30;
	return sum;

	
}
int main()
{
	int y1,m1,d1,y2,m2,d2;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	int i,sum=0;
	for (i=y1;i<y2;i++)
	{
		sum+=365+runnian(i);
	}
	sum=sum+rizi(y2,m2,d2)-rizi(y1,m1,d1);
	cout<<sum;
	return 0;
}

