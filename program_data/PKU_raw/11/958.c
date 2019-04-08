int leap(int);
int main()
{
	int daymonth[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	int YEAR,MON,DAY,i,counter=0;
	cin>>YEAR>>MON>>DAY;
	for(i=0;i<MON-1;i++)
	{
		counter+=daymonth[leap(YEAR)][i];
	}
	counter+=DAY;
	cout<<counter<<endl;
	return 0;
}
int leap(int YEAR)
{
	if((YEAR%4==0)&&(YEAR%100!=0)||(YEAR%400==0))
			return 1;
	else
		return 0;
}
