int main()
{
	int day[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	int year1;
	int year2;
	int month1;
	int month2;
	int day1;
	int day2;
	int i;
	int sum=0;
	cin>>year1>>month1>>day1;
	cin>>year2>>month2>>day2;
	
	while(month1!=month2||year1!=year2)
	{
		if((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
			   sum=sum+day[1][month1];
		   else
			      sum=sum+day[0][month1];
		if(month1==12){    month1=month1-12;
						  year1=year1+1;
					   }
		else month1++;
	}
	sum=sum+day2-day1;
	cout<<sum;
}