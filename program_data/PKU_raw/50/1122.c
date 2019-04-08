
int main()
{
	int w,firstfri,interval,i;
	scanf("%d",&w);
	if(w<=5)
		firstfri=6-w;
	else if(w>5) firstfri=13-w;
	interval=13-firstfri;
	for(i=1;i<=12;i++)
	{
		if(i==1) if(interval%7==0) printf("%d\n",i);
		if(i==2||i==4||i==6||i==8||i==9||i==11)
		{
			interval+=31;
			if(interval%7==0) printf("%d\n",i);
		}
		if(i==3) 
		{
			interval+=28;
			if(interval%7==0)
				printf("%d\n",i);
		}
		if(i==5||i==7||i==10||i==12)
		{
			interval+=30;
			if(interval%7==0)
				printf("%d\n",i);
		}
	}
	return 0;
}
				
