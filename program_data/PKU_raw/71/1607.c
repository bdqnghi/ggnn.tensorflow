
void main()
{
	int y,m,n,i,e,k;
	int day=0;
	int t;
	scanf("%d",&t);
	for(k=1;k<=t;k++){
		{
	scanf("%d%d%d",&y,&m,&n);
		}
	if(m>n)
	{
		e=m;
	m=n;
	n=e;
	}
		for(i=m;i<n;i++){
			if(i==1||i==3||i==5||i==7||i==8||i==10)
			{
				day=day+31;
			}
			if(i==4||i==6||i==9||i==11)
			{
				day=day+30;
			}
			if(i==2&&(y%400==0||((y%4==0)&&(y%100!=0))))
			    day=day+29;
			if(i==2&&(y%4!=0||(y%100==0&&(y%400!=0))))
				day=day+28;
	
		}
	
	
		if(day%7==0)
			printf("YES\n");
		else
			printf("NO\n");
		day=0;
	}
}
			