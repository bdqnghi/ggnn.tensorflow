

int main()
{
	int year,month,day,num=0;
	int Ping[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	cin>>year;
	if( year%4 != 0 || ( year%100 == 0 && year%400 != 0 ) )
	{
		;
	}
	else
	{
		Ping[2]++;
	}
	cin>>month>>day;
	for( int i=0 ; i<month ; i++ )
	{
		num+=Ping[i];
	}
//	cout<<num+day<<endl;
	int year1=(year-1)%400;
	num+=year1+year1/4-year1/100+day;
	switch(num%7)
	{
	case 0:cout<<"Sun."<<endl;break;
	case 1:cout<<"Mon."<<endl;break;
	case 2:cout<<"Tue."<<endl;break;
	case 3:cout<<"Wed."<<endl;break;
	case 4:cout<<"Thu."<<endl;break;
	case 5:cout<<"Fri."<<endl;break;
	default:cout<<"Sat."<<endl;break;
	}

}