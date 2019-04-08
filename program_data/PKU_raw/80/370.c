int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year=0,month1=0,month2=0,day;
	int y1,y2,m1,m2,d1,d2;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	int i;
	for(i=y1;i<=y2;i++)
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			year++;
	year+=365*(y2-y1);
	
	if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		a[2]=29;
	for(i=1;i<=m1-1;i++)
		month1=month1+a[i];
	month1+=d1;

	if(!(y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		a[2]=28;
	for(i=1;i<=m2-1;i++)
		month2=month2+a[i];
	month2+=d2;
	day=year+month2-month1;
	cout<<day;


	return 0;
}