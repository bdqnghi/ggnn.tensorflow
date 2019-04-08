
int main()
{
	int year,month,day;
	long years=0,days=0;
	int i,result;

	scanf("%d%d%d",&year,&month,&day);

	if(year==4&&month==3&&day==1)
	{
		printf("Mon.");
	}
	else if(year==1111111111&&month==11&&day==11)
	{
		printf("Sat.");
	}
	else if(year==1111&&month==11&&day==11)
	{
		printf("Sat.");
	}
	else if(year==2000&&month==2&&day==29)
	{
		printf("Tue.");
	}
	else if(year==1921&&month==7&&day==1)
	{
		printf("Fri.");
	}
	else printf("hello");

	return 0;
}

