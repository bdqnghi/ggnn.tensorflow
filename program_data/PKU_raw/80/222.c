int main()
{
	int year[3001]={0},deta=0,year1,year2,mon1,mon2,day1,day2,i;
	int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<=3001;i++)
	{
		year[i]=365;
	}
	for(i=1;i<=3001;i++)
	{
		if((i%4==0&&i%100!=0)||(i % 400==0)) 
		year[i]=366;
	}

	cin>>year1>>mon1>>day1;
	cin>>year2>>mon2>>day2;

	if(year2%4==0)
	{
		deta=1;
	}

	if((year2%4==0&&year2%100!=0)||(year2 % 400==0)) 
	{
		mon[2]=28;
	}


    for(i=year1;i<year2;i++)
	{
		deta+=year[i];
	}

	if(mon1>mon2)
	{
		for(i=mon2;i<mon1;i++)
		{
			deta-=mon[i];
		}
	}

	if(mon2>mon1)
	{
		for(i=mon1;i<mon2;i++)
		{
			deta+=mon[i];
		}
	}

	deta=deta+day2-day1;



	cout<<deta<<endl;



	return 0;



}




