int runnian(int y);
int lunhun(int y,int m,int d);
int main()
{
	int y,m,d,x;
	scanf("%d%d%d",&y,&m,&d);
	x=lunhun(y,m,d);
	x=x%7;
	switch(x)
	{
	case 1:
		printf("Mon.");
		break;
	case 2:
		printf("Tue.");
		break;
	case 3:
		printf("Wed.");
		break;
	case 4:
		printf("Thu.");
		break;
	case 5:
		printf("Fri.");
		break;
	case 6:
		printf("Sat.");
		break;
	case 0:
		printf("Sun.");
		break;
	}
	return 0;
}

int lunhun(int y,int m,int d)
{
	int x=0;
	if(y%400!=0)
	{
		y=y%400;
	}
	else
	{
		y=400;
	}
	for(int i=1;i<m;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			x+=3;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			x+=2;
		}
		else if(i==2)
		{
			if(runnian(y))
			{
				x+=1;
			}
		}
	}
	x+=d%7;
	for(int j=1;j<y;j++)
	{
		if(runnian(j))
		{
			x+=1;
		}
	}
	x=x+y-1;
	return x;
}

int runnian(int y)
{
	int result;
	if((y%400==0)||(y%4==0&&y%100!=0))
	{
		result=1;
	}
	else
	{
		result=0;
	}
	return result;
}
