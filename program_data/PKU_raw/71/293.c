int main()
{
	int y,m1,m2,i,j,n,e,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&y,&m1,&m2);
		c=0;
		if(m1>m2)
		{
			e=m1;
			m1=m2;
			m2=e;
		}
		for(j=1;j<=12;j++)
		{
			if(j>=m1 && j<m2 && (j==1||j==3||j==5||j==7||j==8||j==10||j==12))	
				c=c+31;
			if(j>=m1 && j<m2 && (j==4||j==6||j==9||j==11))	
				c=c+30;
			if(j>=m1 && j<m2 && j==2)	
			{
				c=c+28;
				if(y%400==0 || (y%100!=0 && y%4==0))
					c=c+1;
			}
			

		}
		if(c%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	
	}
	return 0;
}

