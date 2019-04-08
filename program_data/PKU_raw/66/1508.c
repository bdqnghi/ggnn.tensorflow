
void countdate(int year,int month,int date,long *num);
void countyear(int year,long *num);

int main()
{
	int month,date;
	long year,num=0;

	cin>>year>>month>>date;

	while(year>7000)
		year-=7000;
	countdate(year,month,date,&num);
	countyear(year,&num);

	switch(num%7)
	{
		case 0:cout<<"Sun."<<endl;break;
		case 1:cout<<"Mon."<<endl;break;
		case 2:cout<<"Tue."<<endl;break;
		case 3:cout<<"Wen."<<endl;break;
		case 4:cout<<"Thu."<<endl;break;
		case 5:cout<<"Fri."<<endl;break;
		case 6:cout<<"Sat."<<endl;break;
	}

	return 0;
}

void countdate(int year,int month,int date,long *num)
{
	int i,day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	for(i=1;i<month;i++)
		*num+=day[i];
	*num+=date;
	if(month>2)
		if((year%400==0)||((year%100!=0)&&(year%4==0)))
			(*num)++;
}

void countyear(int year,long *num)
{
	*num+=(year-1)*365;
	*num+=(year-1)/4;
	*num-=(year-1)/100;
	*num+=(year-1)/400;
}