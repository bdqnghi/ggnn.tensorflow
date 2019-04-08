
int main()
{   
	int styear,stmonth,stday;
	int enyear,enmonth,enday;
	int sum=0;
	int i,j,k;
	int year[2]={365,366};
	int yearmonth[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	cin>>styear>>stmonth>>stday;
	cin>>enyear>>enmonth>>enday;
	if(styear==enyear)
	{
	    if(stmonth==enmonth)
			sum=enday-stday;
		else
			for(j=stmonth;j<=enmonth;j++)
				{
					if(j==stmonth)
					sum=sum+yearmonth[(styear % 4 == 0 && styear % 100 != 0) || (styear % 400 == 0)][j]-stday;
					else if(j==enmonth)
						sum=sum+enday;
					else
						sum=sum+yearmonth[(styear % 4 == 0 && styear % 100 != 0) || (styear % 400 == 0)][j];
			}
	}
	else
	{
		for(j=stmonth;j<=12;j++)
		{
			if(j==stmonth)
					sum=sum+yearmonth[(styear % 4 == 0 && styear % 100 != 0) || (styear % 400 == 0)][j]-stday;
			else
					sum=sum+yearmonth[(styear % 4 == 0 && styear % 100 != 0) || (styear % 400 == 0)][j];
		}
		styear++;
		while(styear<enyear)
			{
				sum=sum+year[(styear % 4 == 0 && styear % 100 != 0) || (styear % 400 == 0)];
				styear++;
		}
		j=1;
		while(j<enmonth)
		{
			sum=sum+yearmonth[(styear % 4 == 0 && styear % 100 != 0) || (styear % 400 == 0)][j];
			j++;
		}
		sum=sum+enday;
	}
	cout<<sum;




	return 0;
}

