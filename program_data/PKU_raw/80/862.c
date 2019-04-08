

int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int c[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int calender(int y,int m,int d)
{
	int date=0;
	int y1=1;
	while(y1<y)
	{
		if(((y1) % 4 == 0 && (y1) % 100 != 0) || ((y1) % 400 == 0))
		{
			date=date+366;
			y1++;
		}
		else
		{
			date=date+365;
			y1++;
		}
	}
	while(m>1)
	{
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1% 400 == 0))
		{
			date=date+c[m-1];
			m--;
		}
		else
		{
			date=date+b[m-1];
			m--;
		}
	}
	date=date+d-1;
	return date;

}


int main()
{
	int y1,m1,d1;
	int y2,m2,d2;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	cout<<calender(y2,m2,d2)-calender(y1,m1,d1);
	return 0;
}

