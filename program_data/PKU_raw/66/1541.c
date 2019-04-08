//????
int main()
{
	int year,month,day,sum=0,mod,i;
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>year>>month>>day;
	if (year%4==0&&year%100!=0||year%400==0)//??????
	{
		days[2]=29;
		sum+=year-1+year/4-year/100+year/400-1;
	}
	else
		sum+=year+year/4-year/100+year/400-1;
	for (i=1;i<month;i++)//????
		sum+=days[i];
	sum+=day;
	mod=sum%7;
	switch(mod)
	{
	case 0:cout<<"Sun."<<endl;break;
	case 1:cout<<"Mon."<<endl;break;
	case 2:cout<<"Tue."<<endl;break;
	case 3:cout<<"Wed."<<endl;break;
	case 4:cout<<"Thu."<<endl;break;
	case 5:cout<<"Fri."<<endl;break;
	case 6:cout<<"Sat."<<endl;
	}
	return 0;
}
