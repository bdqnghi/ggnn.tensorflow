int sum(int,int,int);
int m1[13]={0,31,30,31,30,31,30,31,31,30,31,30,31};
int m2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
   int y1, m1, d1, y2, m2, d2,count;
   cin >> y1 >> m1 >> d1;
   cin>> y2 >> m2 >>d2;
    count=sum(y2,m2,d2)-sum(y1,m1,d1);
	cout << count <<endl;
	return 0;
}
int sum(int year, int month,int day)
{
	int i,daysum=0,flag=0;
	for(i=1;i<year;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
			daysum = daysum+366;
		else daysum=daysum+365;
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		flag= 1;
	for(i=1;i<month;i++)
	{
		if(flag==0) daysum = daysum + m1[i];
		else daysum = daysum + m2[i];
	}
	daysum = daysum+day;
	return daysum;

}