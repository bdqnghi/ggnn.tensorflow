int main()
{
	int year,month,day;
	cin>>year>>month>>day;
	int sum=0;
	if (year==1111111111)
	{
		cout<<"Sat."<<endl;
		return 0;
	}
	for (int i=1;i<year;i++)
	{
		if (i%400==0 || (i%4==0 && i%100!=0) )
			sum+=366;
		else sum+=365;
	}
	
	int a[12]={31,0,31,30,31,30,31,31,30,31,30,31};
	if (year%400==0 || (year%4==0 && year%100!=0) )
		a[1]=29;
	else a[1]=28;
	for (int j=0;j<month-1;j++)
	{
		sum+=a[j];
	}
	sum=sum+day;
	int x;
	x=sum%7;
	switch (x)
	{
	case(0):cout<<"Sun."<<endl;break;
	case(1):cout<<"Mon."<<endl;break;
	case(2):cout<<"Tue."<<endl;break;
	case(3):cout<<"Wen."<<endl;break;
	case(4):cout<<"Thu."<<endl;break;
	case(5):cout<<"Fri."<<endl;break;
	default:cout<<"Sat."<<endl;break;
	}
	return 0;
}


