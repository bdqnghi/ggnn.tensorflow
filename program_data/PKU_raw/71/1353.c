
int leapyear(int year)
{
	if (year%400==0 || (year%4==0 && year%100!=0))
		return 1;
	return 0;
}

int daycount(int year,int month)
{
	int i, sum=0;
	for (i=1;i<month;i++)
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			sum+=31;
		else if (i==4 || i==6 || i==9 || i==11)
			sum+=30;
		else if (i==2 && leapyear(year))
			sum+=29;
		else sum+=28;
	return sum;
}
int main()
{
	int n,i;
	int year[200],month1[200],month2[200];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d%d%d",&year[i],&month1[i],&month2[i]);

	for (i=0;i<n;i++)
		if (abs(daycount(year[i],month1[i])-daycount(year[i],month2[i]))%7==0)
			printf("YES\n");
		else printf("NO\n");
	return 0;
}
