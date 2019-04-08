int main()
{   
	int year,month,day,b,i;
	for(i=1;i<=5;++i)
	{
	int count(int month,int year,int day);
	scanf("%d %d %d",&year,&month,&day);
	b=count(month,year,day);
	printf("%d\n",b);
	}
	scanf("%d",&b);
	return 0;
}

    int count(int month,int year,int day)
	{
		int a;
		if((year%4==0&&year%100!=0)||year%400==0)
		{
			switch(month)
			{
			case(1):
			a=day;break;
			case(2):
			a=31+day;break;
			case(3):
			a=60+day;break;
			case(4):
			a=91+day;break;
			case(5):
				a=121+day;break;
			case(6):
				a=152+day;break;
			case(7):
				a=182+day;break;
			case(8):
				a=213+day;break;
			case(9):
				a=244+day;break;
			case(10):
				a=274+day;break;
			case(11):
				a=305+day;break;
			case(12):
				a=335+day;break;
			}
		}
		else
		{
			switch(month)
			{
			case(1):
			a=day;break;
			case(2):
			a=31+day;break;
			case(3):
			a=59+day;break;
			case(4):
			a=90+day;break;
			case(5):
				a=120+day;break;
			case(6):
				a=151+day;break;
			case(7):
				a=181+day;break;
			case(8):
				a=212+day;break;
			case(9):
				a=243+day;break;
			case(10):
				a=273+day;break;
			case(11):
				a=304+day;break;
			case(12):
				a=334+day;break;
			}
		}
		return(a);
	}