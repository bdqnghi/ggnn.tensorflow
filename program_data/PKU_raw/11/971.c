int main()
{
	int year, month, day, total=0, i;
	int mon[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	cin>>year>>month>>day;
	if(year%4==0&&year%100!=0||year%400==0)
	{
		for(i=1;i<month;i++)
			total += mon[1][i];
		total += day;
	}
	else
	{
		for(i=1;i<month;i++)
			total += mon[0][i];
		total += day;
	}
	cout<<total<<endl;
	return 0;
}