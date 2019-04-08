int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
int leap_days[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int leap(int year)
{
	return year%4==0&&year%100!=0 || year%400==0;
}

int daysum(int year,int month,int day)
{
	int i,c=day;
	for(i=1;i<month;i++)
		if(leap(year)) c+=leap_days[i];
		else c+=days[i];
	return c;
}

void main()
{
	int y1,m1,d1,y2,m2,d2,i,n=0,a,b;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	for(i=y1+1;i<y2;i++)
	{
		n+=leap(i)?366:365;
	}
	if(y1==y2) n=daysum(y2,m2,d2)-daysum(y1,m1,d1);
	else 
	{
		n=n+daysum(y2,m2,d2)+365-daysum(y1,m1,d1);
		if(leap(y1)) n++;
	}
	printf("%d",n);
}