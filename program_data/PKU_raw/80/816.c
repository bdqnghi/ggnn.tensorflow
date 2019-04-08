
int lmonth[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int pmonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int days(int year,int m,int d){
	int day = 0;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		for (int i=1;i<=m-1;i++)
			day += lmonth[i];
	}
	else for (int i=1;i<=m-1;i++)
		day += pmonth[i];
	day += d;
	return day;
}

int main ()
{
	int y1,m1,d1,y2,m2,d2;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	int sum = 0;
	for (int i=y1;i<=y2-1;i++){
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			sum += 366;
		else sum += 365;
	}
	sum -= days(y1,m1,d1);
	sum += days(y2,m2,d2);
	cout<<sum;
	return 0;
}

