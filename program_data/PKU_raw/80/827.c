int leap(int a)
{
	if ((a%4==0&&a%100!= 0)||(a%400==0))
		return 1;
	else 
		return 0;
}
int year[2]={365,366};
int month [2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
int main()
{
	int y1,m1,d1;
	cin>>y1>>m1>>d1;
	int y2,m2,d2;
	cin>>y2>>m2>>d2;
	int day=0,i;
	for (i=y1+1;i<y2;i++)
	{
		day=day+year[leap(i)];
	}
	if (y1<y2)
	{
	for (i=m1;i<12;i++)
		day=day+month[leap(y1)][i];
	for (i=0;i<m2-1;i++)
		day=day+month[leap(y2)][i];
	day=day+31-d1;
	day=day+d2;
	}
	else if (y1==y2)
	{
		for (i=m1;i<m2-1;i++)
			day=day+month[leap(y1)][i];
		day=day+d2-d1;
	}
	cout<<day;
}