int main()
{
	int num[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	long long y,m,d,flag1=0,week=0;
	long long sum=0;
	cin>>y>>m>>d;
	sum=(y-1)*365+(y-1)/4-(y-1)/100+(y-1)/400;
	if(y%4==0&&y%100!=0||y%400==0)
			flag1=1;
	for(int i=0;i<m-1;i++)
		sum+=num[flag1][i]%7;
	sum+=d%7-1;
	week=sum%7;
	switch(week)
	{
	case 0:cout<<"Mon.";break;
	case 1:cout<<"Tue.";break;
	case 2:cout<<"Wed.";break; 
	case 3:cout<<"Thu.";break; 
	case 4:cout<<"Fri.";break;
	case 5:cout<<"Sat.";break; 
	case 6:cout<<"Sun.";break;
	}
	return 0;
}
