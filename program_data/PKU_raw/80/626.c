

int main()
{
	int STARTyear,STARTmonth,STARTday,ENDyear,ENDmonth,ENDday;
	int i;
	int Pyear[12],Ryear[12];
	int STARTdate,ENDdate,date;
	int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int b[12]={0,31,29,31,30,31,30,31,31,30,31,30};
	int disyear[402]={0,0};
	Pyear[0]=a[0];
	Ryear[0]=b[0];
	for( i=1 ; i<12 ; i++ )
	{
		Pyear[i]=Pyear[i-1]+a[i];
		Ryear[i]=Ryear[i-1]+b[i];
	}
	cin>>STARTyear>>STARTmonth>>STARTday
		>>ENDyear>>ENDmonth>>ENDday;
	if( (STARTyear % 4 == 0 && STARTyear % 100 != 0) || (STARTyear % 400 == 0) )
	{
		STARTdate=Ryear[STARTmonth-1]+STARTday-1;
	}
	else
	{
		STARTdate=Pyear[STARTmonth-1]+STARTday-1;
	}
	if( (ENDyear % 4 == 0 && ENDyear % 100 != 0) || (ENDyear % 400 == 0) )
	{
		ENDdate=Ryear[ENDmonth-1]+ENDday-1;
	}
	else
	{
		ENDdate=Pyear[ENDmonth-1]+ENDday-1;
	}
	for( i=1 ; i<401 ; i++ )
	{
		if( i%4!=0 || ( i%100==0 && i%400!=0 ) )
		{
			disyear[i+1]=disyear[i]+365;
		}
		else
		{
			disyear[i+1]=disyear[i]+366;
		}
	}
	
	for( i=1 ; i<401 ; i++ )
	{
		if( STARTyear%400==i%400 )
		{
			STARTdate+=disyear[401]*( (STARTyear-i)/400 )+disyear[i];
		}
		if( ENDyear%400==i%400 )
		{
			ENDdate+=disyear[401]*( (ENDyear-i)/400 )+disyear[i];
		}
	}
	date=ENDdate-STARTdate;
	cout<<date<<endl;
}