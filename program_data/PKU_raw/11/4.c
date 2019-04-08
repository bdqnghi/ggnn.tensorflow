int main()
{
	int month,date,n=0,i,year,p;
	scanf("%d %d %d",&year,&month,&date);
	if(year%400==0||(year%100!=0&&year%4==0))
		p=29;
	else
		p=28;
	for(i=1;i<month;i++)
	{
		switch (i)
		{
		case 1:
			n+=31;
			break;
		case 2:
			n+=p;
			break;
		case 3:
			n+=31;
			break;
		case 4:
			n+=30;
			break;
		case 5:
			n+=31;
			break;
		case 6:
			n+=30;
			break;
		case 7:
			n+=31;
			break;
		case 8:
			n+=31;
			break;
		case 9:
			n+=30;
			break;
		case 10:
			n+=31;
			break;
		case 11:
			n+=30;
			break;
		}
	}
	n+=date;
	printf("%d\n",n);
	return 0;
}