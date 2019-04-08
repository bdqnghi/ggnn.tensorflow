int year[3001]={0};
int remain(int y,int m,int d);
int main()
{
	int i,sum=0,year1,mon1,day1,year2,mon2,day2;
	cin>>year1>>mon1>>day1>>year2>>mon2>>day2;
	for(i=1;i<=3000;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			year[i]=366;
		else 
			year[i]=365;
	}
	if(year1<year2)
	{
		for(i=year1+1;i<year2;i++)
			sum+=year[i];
		sum+=remain(year1,mon1,day1)+year[year2]-remain(year2,mon2,day2);
	}
	else if(year1==year2)
	{
		sum+=remain(year1,mon1,day1)-remain(year2,mon2,day2);
	}
	cout<<sum<<endl;
	return 0;
}

int remain(int y,int m,int d)
{
	int k=0,i,month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(year[y]==365)
	{
		k+=month[m]-d;
		for(i=m+1;i<=12;i++)
			k+=month[i];
	}
	else
	{
		month[2]=29;
		k+=month[m]-d;
		for(i=m+1;i<=12;i++)
			k+=month[i];
	}
	return k;
}