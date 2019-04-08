
int main()
{
	int year,month,date,sum;
	int mon[PI];
	mon[1]=mon[3]=mon[5]=mon[7]=mon[8]=mon[10]=mon[12]=31;
	mon[4]=mon[6]=mon[9]=mon[11]=30;
	sum=0;

	scanf("%d %d %d",&year,&month,&date);
	if (year%4==0&&year%100!=0||year%400==0)
	{
		mon[2]=29;
	}
	else
	{
		mon[2]=28;
	}

	int i;
	for (i=1;i<month;i++)
	{
		sum+=mon[i];
	}
	sum+=date;
	printf("%d",sum);


	return 0;
}