int main()
{
	int y,m,n=0,d,a,b;
	cin>>y>>m>>d;
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
	{
		a=1;
	}
	else
	{
		a=0;
	}
	b=(y+(y-1)/4-(y-1)/100+(y-1)/400)%7;
	switch(m)
	{
		case 12:n=n+30;
		case 11:n=n+31;
		case 10:n=n+30;
		case 9:n=n+31;
		case 8:n=n+31;
		case 7:n=n+30;
		case 6:n=n+31;
		case 5:n=n+30;
		case 4:n=n+31;
		case 3:n=n+28+a;
		case 2:n=n+31;
		case 1:n=n;
	}
	n=n+d;
	switch((n-1+b)%7)
	{
	case 0:cout<<"Sun.";break;
	case 1:cout<<"Mon.";break;
	case 2:cout<<"Tue.";break;
	case 3:cout<<"Wed.";break;
	case 4:cout<<"Thu.";break;
	case 5:cout<<"Fri.";break;
	case 6:cout<<"Sat.";break;
	}	
	return 0;
}