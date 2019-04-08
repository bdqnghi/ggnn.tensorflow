int isrunnian(int year)
{
	if(year%400==0)
		return 1;
	else if(year%4==0&&year%100!=0)
		return 1;
	else
		return 0;
}
int main()
{
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	if(m==1)
		printf("%d\n",d);
	else if(m==2)
		printf("%d\n",31+d);
	else if(m==3)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+d);
		else
			printf("%d\n",31+28+d);
	}
	else if(m==4)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+31+d);
		else
			printf("%d\n",31+28+31+d);
	}	
	else if(m==5)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+31+30+d);
		else
			printf("%d\n",31+28+31+30+d);
	}	
	else if(m==6)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+31+30+31+d);
		else
			printf("%d\n",31+28+30+31+31+d);
	}	
	else if(m==7)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+31+30+31+30+d);
		else
			printf("%d\n",31+28+31+30+31+30+d);
	}	
	else if(m==8)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+31+30+31+30+31+d);
		else
			printf("%d\n",31+28+31+30+31+30+31+d);
	}	
	else if(m==9)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+31+30+31+30+31+31+d);
		else
			printf("%d\n",31+28+31+30+31+30+31+31+d);
	}	
	else if(m==10)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+31+30+31+30+31+31+30+d);
		else
			printf("%d\n",31+28+31+30+31+30+31+31+30+d);
	}	
	else if(m==11)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+31+30+31+30+31+31+30+31+d);
		else
			printf("%d\n",31+28+31+30+31+30+31+31+30+31+d);
	}	
	else if(m==12)
	{
		if(isrunnian(y))
	    	printf("%d\n",31+29+31+30+31+30+31+31+30+31+30+d);
		else
			printf("%d\n",31+28+31+30+31+30+31+31+30+31+30+d);
	}
	return 0;
}