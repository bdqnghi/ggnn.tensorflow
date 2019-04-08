int judge(int n)
{
	if((n%4==0&&n%100!=0)||(n%400==0))
	return 1;
	else return 0;
}
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year1, month1,day1,year2,day2,month2;
	cin>>year1>>month1>>day1>>year2>>month2>>day2;
	int i=1,time1=0,time2=0;
	a[1]=judge(year1)+28;
	for(i=1;i<month1;i++)
	{   
		time1+=a[i-1];
	}
	time1+=day1-1;
	a[1]=judge(year2)+28;
	for(i=1;i<month2;i++)
	{    
		time2+=a[i-1];
	}
	time2+=day2-1;
	int time=0;
	for(i=year1;i<year2;i++)
	{
		time+=365+judge(i);
		

	}
	int result;
	
	result=time+time2-time1;
	
	cout<<result;
		return 0;
}
