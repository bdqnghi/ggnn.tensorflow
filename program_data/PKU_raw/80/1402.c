int main()
{
	int sy, sm, sd, ey, em, ed, n;
	int year(int y);
	int mouth(int m, int y);
	int day(int d);
	scanf("%d%d%d%d%d%d", &sy, &sm, &sd, &ey, &em, &ed);
	n=year(ey)+mouth(em, ey)+day(ed)-year(sy)-mouth(sm, sy)-day(sd);
    printf("%d\n", n);
	return 0;
}

int year(int y)
{
	int i, sum=0;
	for(i=1000;i<y;i++)
	{
		if((i%4==0 && i%100!=0) || (i%400==0))
        sum=sum+366;
		else sum=sum+365;
	}
	return(sum);
}

int mouth(int m, int y)
{
	int i, sum=0;
	if((y%4==0 && y%100!=0) || (y%400==0))
	{
		for(i=1;i<m;i++)
		{
			if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
				sum=sum+31;
			else if(i==2)
				sum=sum+29;
			else sum=sum+30;
		}
	}
	else
	{
		for(i=1;i<m;i++)
		{
			if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
				sum=sum+31;
			else if(i==2)
				sum=sum+28;
			else sum=sum+30;
		}
	}
	return(sum);
}

int day(int d)
{	
	return(d-1);
}