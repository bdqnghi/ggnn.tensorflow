int main()
{
	int year,month,day;
	int c,y,m,d,week;
	cin>>year>>month>>day;
	if(month==1||month==2)
	{
		month+=12;
		year--;
	}
	c=year/100;
	y=year%100;
	m=month;
	d=day;
	week=y%7+(y/4)%7+(c/4)%7-(2*c)%7+(26*(m+1)/10)%7+d-1;
	week%=7;
	if(week==1)
		cout<<"Mon."<<endl;
	else if(week==2)
		cout<<"Tue."<<endl;
	else if(week==3)
		cout<<"Wed."<<endl;
	else if(week==4)
		cout<<"Thu."<<endl;
	else if(week==5)
		cout<<"Fri."<<endl;
	else if(week==6)
		cout<<"Sat."<<endl;
	else if(week==0)
		cout<<"Sun."<<endl;
	return 0;
}
