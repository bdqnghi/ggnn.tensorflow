int isrn(int n)
{
	if(n%400==0)
		return 1;
	else
	{
		if(n%100==0)
			return 0;
		else
		{
			if(n%4==0)
				return 1;
			else 
				return 0;
		}
	}
}

void main()
{
	int y,m,d,sum=0,i;
	scanf("%d %d %d",&y,&m,&d);
	for(i=1;i<m;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		{
			sum+=31;
		}
		if(i==4||i==6||i==9||i==11)
		{
			sum+=30;
		}
		if(i==2)
		{
			if(isrn(y))
				sum+=29;
			else 
				sum+=28;
		}
	}
	sum+=d;
	printf("%d\n",sum);
}
