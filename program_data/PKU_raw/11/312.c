

int main()
{
	int year,month,day,i,n;
	scanf("%d%d%d",&year,&month,&day);
	for (i=1,n=0;i<month;i++)
	{
		if (i==1||i==3||i==5||i==7||i==8||i==10)
		{
			n=n+31;
		}
		else if (i==2)
		{
			if ((year%4==0&&year%100!=0)||(year%400==0))
			{
				n=n+29;
			}
			else
			{
				n=n+28;
			}
		}
		else 
		{
			n=n+30;
		}
	}
	n=n+day;
	printf("%d\n",n);


	return 0;
}
