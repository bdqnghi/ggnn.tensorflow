int main()
{
	int leap(int year);
	int cal(int month,int day);
	int call(int month,int day);
	int k,year,month,day,num;
	scanf("%d%d%d",&year,&month,&day);
	k=leap(year);
	if(k==0)
	{
		num=cal(month,day);
	}
	if(k==1)
	{
		num=call(month,day);
	}
	printf("%d\n",num);
	return 0;
}

int leap(int year)
{
	int k;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				k=1;
			else
				k=0;
		}
		else
			k=1;
	}
	else
		k=0;
	return k;
}
int cal(int month,int day)
{
	int k;
	switch(month)
	{
	case 1:k=day;break;
	case 2:k=day+31;break;
	case 3:k=day+31+28;break;
	case 4:k=day+31+28+31;break;
	case 5:k=day+31+28+31+30;break;
	case 6:k=day+31+28+31+30+31;break;
	case 7:k=day+31+28+31+30+31+30;break;
	case 8:k=day+31+28+31+30+31+30+31;break;
	case 9:k=day+31+28+31+30+31+30+31+31;break;
	case 10:k=day+31+28+31+30+31+30+31+31+30;break;
	case 11:k=day+31+28+31+30+31+30+31+31+30+31;break;
	case 12:k=day+31+28+31+30+31+30+31+31+30+31+30;break;
	}
	return k;
}
int call(int month,int day)
{
    int k;
	switch(month)
	{
	case 1:k=day;break;
	case 2:k=day+31;break;
	case 3:k=day+31+29;break;
	case 4:k=day+31+29+31;break;
	case 5:k=day+31+29+31+30;break;
	case 6:k=day+31+29+31+30+31;break;
	case 7:k=day+31+29+31+30+31+30;break;
	case 8:k=day+31+29+31+30+31+30+31;break;
	case 9:k=day+31+29+31+30+31+30+31+31;break;
	case 10:k=day+31+29+31+30+31+30+31+31+30;break;
	case 11:k=day+31+29+31+30+31+30+31+31+30+31;break;
	case 12:k=day+31+29+31+30+31+30+31+31+30+31+30;break;
	}
	return k;
}