int main(){
	int n,year,month1,month2,days=0,i,detmonth,a;
	cin >> n;
	for(i=1;i<=n;i++)
	{
	cin >> year >> month1 >> month2;
	if(month1>month2)
		{a = month2;
		month2 = month1;
		month1 = a;}
	detmonth = month2 - month1;
	for(;detmonth>0;month1++,detmonth--)
		{if(month1==4||month1==6||month1==9||month1==11)
			days += 30;
		else if(month1 ==2)
		{if(((year%4 == 0) &&(year % 100 != 0 ))||(year % 400 == 0))
				days += 29;
				else days += 28;}
		else days += 31;}
	if(days % 7 == 0)
		cout <<"YES"<<endl;
	else cout <<"NO"<<endl;
	days = 0;
	}
	return 0;
}