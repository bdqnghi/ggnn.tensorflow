
int main()
{
	int y,m,d,y1,t,n;

	scanf("%d%d%d",&y,&m,&d);

	y1 = (y-1)%400;
	t=0;

	if(m>2&&(y%4==0&&y%100!=0||y%400==0))
			t+=1;

	for(;y1>0;y1--)
	{
		if(y1%4==0&&y1%100!=0||y1%400==0)
			t+=366;
		else
			t+=365;
	}

	for(m--;m>0;m--)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			t+=31;
		else if(m==2)
			t+=28;
		else
			t+=30;
	}

	t+=d;

	n=t%7;

	switch (n)
	{
		case(0):
			{
				printf("Sun.");
				break;
			}
		case(1):
			{
				printf("Mon.");
				break;
			}
		case(2):
			{
				printf("Tue.");
				break;
			}
		case(3):
			{
				printf("Wed.");
				break;
			}

		case(4):
			{
				printf("Thu.");
				break;
			}

		case(5):
			{
				printf("Fri.");
				break;
			}	
		case(6):
			{
				printf("Sat.");
				break;
			}
	}

	return 0;
}