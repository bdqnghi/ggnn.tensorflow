long int Jisuan(int year,int month,int day)
{
	long int Calnumber;
	Calnumber=year*365;
	int i,j=0;
	for(i=1;i<year;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			j++;
	}
	Calnumber=Calnumber+j;
	int daysinFeb;
	if((year%4==0&&year%100!=0)||(year%400==0))
		daysinFeb=29;
	else
		daysinFeb=28;
	switch(month)
	{
	case 1:Calnumber+=0;
		break;
	case 2:Calnumber+=31;
		break;
	case 3:Calnumber+=31+daysinFeb;
		break;
	case 4:Calnumber+=31+31+daysinFeb;
		break;
	case 5:Calnumber+=31+31+30+daysinFeb;
		break;
	case 6:Calnumber+=31+31+30+31+daysinFeb;
		break;
	case 7:Calnumber+=31+31+31+30+30+daysinFeb;
		break;
	case 8:Calnumber+=31+31+31+31+30+30+daysinFeb;
		break;
	case 9:Calnumber+=31+31+31+31+31+30+30+daysinFeb;
		break;
	case 10:Calnumber+=31+31+31+31+31+30+30+30+daysinFeb;
		break;
	case 11:Calnumber+=31+31+3+31+31+31+30+30+30+daysinFeb;
		break;
	case 12:Calnumber+=365-28-31+daysinFeb;
		break;
	}
	Calnumber+=day;
	return(Calnumber);
}
int main()
{
	int y1,y2,m1,m2,d1,d2;
	scanf("%d %d %d\n%d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	long int Cal1,Cal2;
	Cal1=Jisuan(y1,m1,d1);
	Cal2=Jisuan(y2,m2,d2);
	int Con;
	Con=Cal2-Cal1;
	printf("%d",Con);
	return 0;
}
