
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
	int i;
	while (cin>>year>>month>>day)
	{
		total=0;
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
					case 3:total+=59+day;break;
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
		cout<<total<<endl;
	}
	return 0;
}
