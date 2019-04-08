int main()
{
	int sY,sM,sD,eY,eM,eD;
	int DiJiTian(int y,int m,int d);
    int isRunNian(int year);
	scanf("%d%d%d%d%d%d",&sY,&sM,&sD,&eY,&eM,&eD);
	int x,days=DiJiTian(eY,eM,eD)-DiJiTian(sY,sM,sD);
	for(x=sY;x<eY;x++)
	{
		if(isRunNian(x))
		{
			days=days+366;
		}
		else
			days=days+365;
	}
	printf("%d",days);
	return 0;
}
int DiJiTian(int y,int m,int d)
{
	int isRunNian(int year);
	int i,result=0;
	for(i=1;i<m;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			result+=31;
		else if(i==4||i==6||i==9||i==11)
			result+=30;
		else if(i==2)
		{
			if(isRunNian(y))
			{
				result+=29;
			}
			else
				result+=28;
		}
	}
	result+=d;
	return result;
}
int isRunNian(int year)
{
	int result1;
	if(year%400==0||(year%4==0)&&(year%100!=0))
	{
		result1=1;
	}
	else
		result1=0;
	return result1;
}


