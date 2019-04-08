int main()
{
	int y1,m1,d1,y2,m2,d2,ans=0,p,i;
	int m[]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	if(y2-y1==0)
	{
		if(m2-m1==0)
			ans=d2-d1;
		else
		{
			if((y1%4==0&&y1%100!=0)||(y1%400==0))
				m[1]=29;
			for(i=m1;i<m2;i++)
				ans+=m[i-1];
			ans=ans=d1+d2;
		}
	}
	else
	{
		for(i=y1;i<y2;i++)
		{
			if((i%4==0&&i%100!=0)||(i%400==0)) 
				ans+=366;
			else
				ans+=365;
		}
			if((y1%4==0&&y1%100!=0)||(y1%400==0))
				m[1]=29;
			for(p=1;p<m1;p++)
				ans-=m[p-1];
			ans-=d1;
			if((y2%4==0&&y2%100!=0)||(y2%400==0))
				m[1]=29;
			else
				m[1]=28;
			for(p=1;p<m2;p++)
				ans+=m[p-1];
			ans+=d2;
	}
	printf("%d\n",ans);
	return 0;
}


