void main()
{		
	int tianshucha(int m, int y1,int r1,int y2,int r2);
	int n;
	int m[200],y1[200],y2[200];
	int i,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&m[i],&y1[i],&y2[i]);
	}
	for(i=0;i<n;i++)
	{
		d=tianshucha(m[i],y1[i],1,y2[i],1);
		if(d%7==0)printf("YES\n");
		else printf("NO\n");
	}


}


int tianshucha(int m,int y1,int r1,int y2,int r2)
{
	int d1,d2,d,i;
	d1=r1;d2=r2;
	for(i=1;i<y1;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)d1=d1+31;
		else
		{
			if(i==2)d1=d1+28;
			else d1=d1+30;
		}
	}
	for(i=1;i<y2;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)d2=d2+31;
		else
		{
			if(i==2)d2=d2+28;
			else d2=d2+30;
		}
	}
	if(d1>d2)d=d1-d2;
	else d=d2-d1;
	if(((m%4==0)&&(m%100!=0))||(m%400==0))
	{
		if((y1<=2&&y2<=2)||(y1>2&&y2>2))
			return d;
		else return d+1;
	}
	return d;
	
}