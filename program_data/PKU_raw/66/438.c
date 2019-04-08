

int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int leap[] = {4,100,400};
char* name[] = {"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};

int leapYearBetween(int a,int b)
{
	int len = b-a+1;
	int sign = 1;
	int years = 0;
	int temp = 0;

	for(int i=0;i<sizeof(leap)/sizeof(int);i++)
	{
		temp = len/leap[i];
		if(leap[i]-(leap[i]-a%leap[i])%leap[i]+len%leap[i]>leap[i])
			temp++;
		years += temp*sign;
		sign *= -1;
	}

	return years;
}

int main()
{
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	
	int leftDay = leapYearBetween(1,(y-1)/7*7);
	leftDay += (y-1)%7*365;
	leftDay += leapYearBetween((y-1)/7*7+1,y-1);

	for(int i=0;i<m;i++)
		leftDay += days[i];
	if(m>2)
		leftDay += leapYearBetween(y,y);
	leftDay += d;

	leftDay %= 7;

	printf("%s\n",name[leftDay]);

	return 0;
}