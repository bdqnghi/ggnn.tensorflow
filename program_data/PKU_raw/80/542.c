


int Is (int year)
{
	return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
int main()
{
	int sy, sm, sd, ey,em,ed;
	int y,m;
	int d=0;
	int a[12]={31,0,31,30,31,30,31,31,30,31,30,31};
	cin >> sy>>sm >> sd >> ey>> em>>ed;
	if (sy==ey)
		if (sm == em)
			d=ed-sd;
		else
		{
			if(Is(sy))
				a[1]=29;
			else
				a[1]=28;
			for (m=sm+1;m<=em-1;m++)
				d=d+a[m-1];
			d=d+a[sm-1]-sd+ed;
		}
	else
	{
		if(Is(sy))
			a[1]=29;
		else
			a[1]=28;
		d=d+a[sm-1]-sd;
		for (m=sm+1;m<=12;m++)
			d=d+a[m-1];
		if(Is(ey))
			a[1]=29;
		else
			a[1]=28;
		d=d+ed;
		for (m=1;m<=em-1;m++)
			d=d+a[m-1];
		for (y=sy+1;y<=ey-1;y++)
			if(Is(y))
				d=d+366;
			else
				d=d+365;
	}

	cout << d <<endl;


	return 0;
}