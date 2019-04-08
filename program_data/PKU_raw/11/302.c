int main()
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int x;
	int Jan=1,feb=2,Mar=3,Apr=4,May=5,Jun=6;
	int Jul=7,Aug=8,Sep=9,Oct=10,Nov=11,Dec=12;
	int Feb;
	{
		if(year%4==0)
		{
			if(year%100==0)
			{
				if(year%400==0)
					Feb=29;
				else
					Feb=28;
			}
			else
				Feb=29;
		}
		else
			Feb=28;
	}
	if(month==Jan)
		x=day;
	if(month==feb)
		x=31+day;
	if(month==Mar)
		x=31+Feb+day;
	if(month==Apr)
		x=31+Feb+31+day;
	if(month==May)
		x=31+Feb+31+30+day;
	if(month==Jun)
		x=31+Feb+31+30+31+day;
	if(month==Jul)
		x=31+Feb+31+30+31+30+day;
	if(month==Aug)
		x=31+Feb+31+30+31+30+31+day;
	if(month==Sep)
		x=31+Feb+31+30+31+30+31+31+day;
	if(month==Oct)
		x=31+Feb+31+30+31+30+31+31+30+day;
	if(month==Nov)
		x=31+Feb+31+30+31+30+31+31+30+31+day;
	if(month==Dec)
		x=31+Feb+31+30+31+30+31+31+30+31+30+day;
	printf("%d\n",x);
	return 0;
}
				
