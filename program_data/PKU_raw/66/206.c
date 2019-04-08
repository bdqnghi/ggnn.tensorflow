
int main()
{
	long int y,m,d;
	int total1=0,total2=0,total3=0,total;
	int i,j,a;

	scanf("%d%d%d",&y,&m,&d);
	a=(y-1)%400;
	for(j=1;j<=a;j++)
	{
		total1=(total1+1)%7;
		if((j%4==0&&j%100!=0)||(j%400==0))
		{
			total1=total1+1;
		}
	}

	int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<m;i++)
	{
		total2=total2+mth[i-1];
	}
	if(((y%4==0&&y%100!=0)||y%400==0)&&(m>2))
	{
		total2=total2+1;
	}
	total3=d;
	total=total1+total2+total3;
	if(total%7==1)
	{
		printf("Mon.\n");
	}
	else if(total%7==2)
	{
		printf("Tue.\n");
	}
	else if(total%7==3)
	{
		printf("Wed.\n");
	}
    else if(total%7==4)
	{
		printf("Thu.\n");
	}
	else if(total%7==5)
	{
		printf("Fri.\n");
	}
	else if(total%7==6)
	{
		printf("Sat.\n");
	}
	else if(total%7==7)
	{
		printf("Sun.\n");
	}

	return 0;
}

