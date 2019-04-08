int main()
{
	int daymonth[12]={31,28,31,30,31,30,31,31,30,31,30,31},dayyear=365,startyear,startmonth,startday,endyear,endmonth,endday;
	int yearx,monthx,dayx;
	int i,j,leap=0;
	int sum=0;
	cin>>startyear>>startmonth>>startday;
	cin>>endyear>>endmonth>>endday;
	yearx=endyear-startyear;
	monthx=endmonth-startmonth;
	dayx=endday-startday;
	if(yearx==0)
	{	
		sum=0;
		leap=0;
		if((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0))
			leap=1;
		if(monthx==0)
		{
			sum=dayx;
		}
		else
		{
			for(i=startmonth;i<endmonth-1;i++)
			{
				sum=sum+daymonth[i];
				if(leap&&i==1)
					sum=sum+1;
			}
			sum=sum+daymonth[startmonth-1]-startday+endday;
		}
		cout<<sum;
	}
	else
	{
		sum=0;
	
		for(i=1;i<yearx;i++)
		{
			leap=0;
			if(((startyear+i) % 4 == 0 && (startyear+i) % 100 != 0) || ((startyear+i) % 400 == 0))
				leap=1;
			sum=sum+dayyear+leap;
		}
		for(i=startmonth;i<12;i++)
		{
			leap=0;
			if((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0))
				leap=1;
			sum=sum+daymonth[i];
			if(leap==1 && i==1)
				sum=sum+1;
		}
		for(i=0;i<endmonth-1;i++)
		{
			leap=0;
			if((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0))
				leap=1;
			sum=sum+daymonth[i];
			if(leap==1 && i==1)
				sum=sum+1;
		}
		sum=sum+daymonth[startmonth-1]-startday+endday;
		cout<<sum;
	}
	return 0;
}


