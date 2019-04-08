int years(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return  366;
	else return 365;
}
int months (int month,int year)
{
	if( month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		return 31;
	if(month==4||month==6||month==9||month==11)
		return 30;
	if(years(year)==366)
		return 29;
	return 28;
}
int main()
{
	int day1[3]={0},day2[3]={0},sum=0;
	for ( int i=0;i<3;i++)
		cin>>day1[i];
	for ( int i=0;i<3;i++)
		cin>>day2[i];
	for ( int i=day1[0]+1;i<day2[0];i++)
		sum=sum+years(i);
	if(day1[0]!=day2[0])
	{
	for ( int i=day1[1];i<=12;i++)
		sum=sum+months(i,day1[0]);
	for ( int i=1;i<day2[1];i++)
		sum=sum+months(i,day2[0]);
	
	}
	else
			for ( int i=day1[1];i<day2[1];i++)
				sum=sum+months(i,day2[0]);
	sum=sum+day2[2]-day1[2];
	cout<<sum<<endl;
	
	return 0;

}