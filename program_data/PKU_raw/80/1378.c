
  int runnian(int);
  int yuefen(int,int,int);

int main()
{ 
  int year1,month1,day1,year2,month2,day2;
  cin>>year1>>month1>>day1>>year2>>month2>>day2;
  int i,answer=0;
  for (i=year1;i<year2;i++)
	  answer+=runnian(i)+365;
  answer=answer-yuefen(year1,month1,day1)+yuefen(year2,month2,day2);
  cout<<answer;
  return 0;
}

int runnian(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int yuefen(int year,int month,int day)
{
	int ans=0;
	switch(month)
	{
	case 12:ans+=30;
	case 11:ans+=31;
	case 10:ans+=30;
	case 9:ans+=31;
	case 8:ans+=31;
	case 7:ans+=30;
	case 6:ans+=31;
	case 5:ans+=30;
	case 4:ans+=31;
	case 3:ans+=28+runnian(year);
	case 2:ans+=31;
	case 1:ans+=0;
	}
    ans+=day;
	return ans;
}