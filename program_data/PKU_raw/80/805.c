int main()
{
	int days[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}},year1,year2,month1,month2,day1,day2;
    int Count=0,i,j,k;

	cin>>year1>>month1>>day1>>year2>>month2>>day2;
	for(i=year1,j=month1,k=day1;i<year2||j<month2||k<day2;Count++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))//??
		{
			if(k<days[1][j-1])
				k++;
			else
			{
				k=1;
				if(j<12)
					j++;
				else
				{
					i++;
					j=1;
				}
			}
		}
		else
		{
			if(k<days[0][j-1])
				k++;
			else
			{
				k=1;
				if(j<12)
					j++;
				else
				{
					i++;
					j=1;
				}
			}
		}
	}
	cout<<Count;
	
	return 0;
}
