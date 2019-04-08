int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
struct date
{
	int year;
	int month;
	int day;
};
int count1(int a,int b)
{
	int i,s=0;
	for(i=1;i<a;i++)
		s=s+m[i];
	return s+b;
}
int count2(int a,int b)
{
	int i,s=0;
	for(i=1;i<a;i++)
		if(i==2)
			s=s+m[i]+1;
		else
			s=s+m[i];
	return s+b;
}
int main()
{
	int i,x=0,day[2]={0};
	struct date start,end;
	cin>>start.year>>start.month>>start.day;
	cin>>end.year>>end.month>>end.day;
	for(i=start.year;i<end.year;i++)
		if((i%4==0&&i%100!=0)||(i%400==0))
			x=x+366;
		else
			x=x+365;
	if((i%4==0&&i%100!=0)||(i%400==0))
		x=x+count2(end.month,end.day)-count2(start.month,start.day);
	else
		x=x+count1(end.month,end.day)-count1(start.month,start.day);
	cout<<x<<endl;
	return 0;
}