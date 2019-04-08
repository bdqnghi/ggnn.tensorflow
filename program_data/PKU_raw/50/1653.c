

int main()
{
	int w,a,x=0,i;
	scanf("%d",&w);
	a=5-w;
	if(a<0)
	{
		a=a+7;
	}
	if(12%7==a)
	{
		printf("1\n");
	}
	for(i=1;i<12;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		{
			x=x+31;
		}
        else if(i==4||i==6||i==9||i==11)
		{
			x=x+30;
		}
		else if(i==2)
		{
			x=x+28;
		}
		if((x+12)%7==a)
		{
			printf("%d\n",i+1);
		}
	}	
	return 0;
}

