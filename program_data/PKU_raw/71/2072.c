int main ( )
{
	int n,year,a,b,i,j,Temp,days=0;
	int Month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int Month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf ("%d",&n);
	for (i=0;i < n;i++)
	{
		scanf("%d%d%d",&year,&a,&b);
		if (a>b){
                           Temp=a;
			a=b;
			b=Temp;
		}
		if( year%400==0 || (year%4==0 && year%100!=0))
		{
			days=0;
			for(j=a;j<b;j++)
				days=days +Month2[j];
		}
		else
		{
			days=0;
			for(j=a;j<b;j++)
				days=days +Month1[j];
		}
		if(days%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}