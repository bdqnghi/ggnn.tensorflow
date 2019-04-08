int main()
{
	int star=1;
	int year,month,day;
	int month1[13]={3,0,3,2,3,2,3,3,2,3,2,3},
	    month2[13]={3,1,3,2,3,2,3,3,2,3,2,3};
	int i,p;
	cin>>year>>month>>day;
    year = year%400;
	if(year!=0)
	{
	for(i=1;i<year;i++)
	{
		if(i%4==0&&i%100!=0)
			star += 2;
		else 
			star += 1;
		if(star>7)
			star -= 7;
	}
	}
	else 
	star=6;
	if(year%4==0&&year%100!=0)
	{
		for(i=1;i<month;i++)
		{
			star += month2[i-1];
		    if(star>7)
			    star -= 7;
		}
	}
	else
	{
		for(i=1;i<month;i++)
		{
			star += month1[i-1];
		    if(star>7)
			    star -= 7;
		}
	}
	star += (day-1)%7;
	if(star>7)
	    star -= 7;
	switch(star)
	{
	    case 1:cout<<"Mon."<<endl;break;
		case 2:cout<<"Tue."<<endl;break;
		case 3:cout<<"Wen."<<endl;break;
		case 4:cout<<"Thu."<<endl;break;
		case 5:cout<<"Fri."<<endl;break;
		case 6:cout<<"Sat."<<endl;break;
		case 7:cout<<"Sun."<<endl;break;
		default: break;
	}
	return 0;
}