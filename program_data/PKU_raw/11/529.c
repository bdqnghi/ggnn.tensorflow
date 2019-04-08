
int main()
{
	int year,month,day,n,i,t=0;
	scanf("%d%d%d",&year,&month,&day);
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<month;i++)
	{
		t=t+a[i];
	}
	if(month>=3)
		if(year%4==0)
			if(year%100==0)
				if(year%400==0)
					n=t+1+day;
				else
					n=t+day;
				else
					n=t+1+day;
				else
					n=t+day;
				else
					n=t+day;

	printf("%d",n);
	return 0;			
			
}