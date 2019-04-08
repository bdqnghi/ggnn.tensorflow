int main()
{
	int dayofweek,days=12,mon[12],i,d,e;
	scanf("%d",&dayofweek);
	for(i=0;i<12;i++)
	{
		if(i==1)
			mon[i]=28;
		else if(i==3||i==5||i==8||i==10)
			mon[i]=30;
		else
			mon[i]=31;

	}
	e=5-dayofweek;
	if(e<0)
		e+=7;
	for(i=0;i<12;i++)
	{
		d=days%7;
		if(d==e)
			printf("%d\n",i+1);
		days+=mon[i];	
	}
	return 0;
}