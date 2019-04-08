int run(int a)
{
	if ( a%4==0 && a%100 !=0 || a%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int date(int yy,int mm,int dd)
{
	int isr = run(yy);
	int p[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int days= 0;
	for (int i = 1;i<mm;i++)
	{
		days = days + p[i];
	}
	days = days + dd;
	if (isr==1 && mm>=3)
		days++;

	return (days);
}

int main()
{
	int yy ,mm,dd;
	cin>>yy>>mm>>dd;
	yy = yy%2800;
	int days= (yy-1)*365;
	days += ((yy-1)/4 -(yy-1)/100 +(yy-1)/400);
	days += date(yy,mm,dd);
	int day = days %7;
	switch (day)
	{
	case(0):cout<<"Sun.";break;
	case(1):cout<<"Mon.";break;
		case(2):cout<<"Tue.";break;
			case(3):cout<<"Wed.";break;
				case(4):cout<<"Thu.";break;
					case(5):cout<<"Fri.";break;
						case(6):cout<<"Sat.";break;
	}

}