
long total;

int run(int n)
{
	if (n%4==0 && n%100!=0)
	{
		return 1;
	}
	if (n%400==0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int year,month,day;
	int i,xq;
	total=0;
	cin>>year>>month>>day;
	year%=400;
	year+=400;
	for (i=1;i<year;i++)
	{
		if (run(i))
		{
			total+=366;
		}
		else
		{
			total+=365;
		}
		total%=7;
	}
	if (run(year))
	{
			if (month==1)
			{
				total+=day;
			}
			if (month==2)
			{
				total+=31+day;
			}
			switch (month)
			{
				case 3:total+=60+day;break;
				case 4:total+=91+day;break;
				case 5:total+=121+day;break;
				case 6:total+=152+day;break;
				case 7:total+=182+day;break;
				case 8:total+=213+day;break;
				case 9:total+=244+day;break;
				case 10:total+=274+day;break;
				case 11:total+=305+day;break;
				case 12:total+=335+day;break;
			}

	}
	else
	{
			if (month==1)
			{
				total+=day;
			}
			if (month==2)
			{
				total+=31+day;
			}
			switch (month)
			{
				case 3:total+=29+day;break;
				case 4:total+=90+day;break;
				case 5:total+=120+day;break;
				case 6:total+=151+day;break;
				case 7:total+=181+day;break;
				case 8:total+=212+day;break;
				case 9:total+=243+day;break;
				case 10:total+=273+day;break;
				case 11:total+=304+day;break;
				case 12:total+=334+day;break;
			}
	}
	xq=total%7;
	switch (xq)
	{
		case 1:cout<<"Mon.";break;
		case 2:cout<<"Tue.";break;
		case 3:cout<<"Wed.";break;
		case 4:cout<<"Thu.";break;
		case 5:cout<<"Fri.";break;
		case 6:cout<<"Sat.";break;
		case 0:cout<<"Sun.";break;
	}
	cin>>i;
	return 0;
}
