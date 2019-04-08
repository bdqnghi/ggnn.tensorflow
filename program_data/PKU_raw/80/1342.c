
int runnian(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int dijitian(int y,int m,int d)
{
	int i,day=0;
	if(runnian(y))
	{
		if(m==2)
			return (31+d);
		else if(m==1)
			return (d);
		else
		{
			for(i=1;i<m;i++)
			{
				if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					day+=31;
				else if(i==2)
					day+=29;
				else
					day+=30;
			}
			return (day+d);
		}
	}
	else
	{
		if(m==2)
			return (31+d);
		else if(m==1)
			return (d);
		else
		{
			for(i=1;i<m;i++)
			{
				if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					day+=31;
				else if(i==2)
					day+=28;
				else
					day+=30;
			}
			return (day+d);
		}
	}
}


int main()
{
	int y1,y2,m1,m2,d1,d2,i,j,k,l,m,n,day=0;
	scanf("%d%d%d",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
	k=dijitian(y1,m1,d1);
	l=dijitian(y2,m2,d2);
	if(y1!=y2)
	{
		for(i=y1;i<y2;i++)
	{
		if(runnian(i))
			day+=366;
		else
			day+=365;
	}
	}
	printf("%d",day+l-k);
	return 0;
}
