int main()
{
	int y,m,d,date=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	//int a[12]={3,0,3,2,3,2,3,3,2,3,2,3},b[12]={3,1,3,2,3,2,3,3,2,3,2,3};
	cin>>y>>m>>d;
	if(y>1)
	{
		date=y-1+(y-1)/4-(y-1)/100+(y-1)/400;
		if(m==1)
			date+=d;
		else
		{
			if(y%4!=0||(y%100==0&&y%400!=0))
			{
				for(int i=0;i<m-1;i++)
					date+=a[i];
			}
			else
			{
				for(int i=0;i<m-1;i++)
					date+=b[i];
			}
			date+=d;
		}
		date=date%7;
	}
	else
	{
		if(m==1)
			date+=d;
		else
		{
			for(int i=0;i<m-1;i++)
				date+=a[i];
			date+=d;
		}
		date=date%7;
	}
	if(date==1)
		cout<<"Mon.";
	if(date==2)
		cout<<"Tue.";
	if(date==3)
		cout<<"Wed.";
	if(date==4)
		cout<<"Thu.";
	if(date==5)
		cout<<"Fri.";
	if(date==6)
		cout<<"Sat.";
	if(date==0)
		cout<<"Sun.";
	return 0;
}