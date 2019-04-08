// ???.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
int main()
{
	int i,n,year,runfou,er,mon1,mon2,k,j,day;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		day=0;
		scanf("%d%d%d", &year,&mon1,&mon2);
		if (year%4==0)
			if (year%100==0)
				if (year%400==0)
					runfou=1;
				else
					runfou=0;
			else
				runfou=1;
		else
			runfou=0;
		if (runfou==0)
			er=28;
		else
			er=29;
		if (mon1>mon2)
		{
			k=mon2;
			j=mon1;
		}
		else if (mon1<mon2)
		{
			k=mon1;
			j=mon2;
		}
		else
			printf("YES\n");
		for (;k<j;k++)
		{
			switch (k)
			{
			case 1:day+=31;break;
			case 2:day+=er;break;
			case 3:day+=31;break;
			case 4:day+=30;break;
			case 5:day+=31;break;
			case 6:day+=30;break;
			case 7:day+=31;break;
			case 8:day+=31;break;
			case 9:day+=30;break;
			case 10:day+=31;break;
			case 11:day+=30;break;
			case 12:day+=31;break;
			}
		}
	//	printf(":%d\n", day);
		if (day%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

