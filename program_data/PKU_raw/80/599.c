int main()
{
	int y,m,d,y2,m2,d2,max,t=0;
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&y,&m,&d);
	scanf("%d%d%d",&y2,&m2,&d2);
	max=day[m];
	if(m==2 && ((y%4==0 && y%100!=0) ||(y%100==0 && y%400==0))) max++;
	while(y<y2 || m<m2 || d<d2)
	{
		t++;
		d++;
		if(d>max)
		{
			d=1;
			m++;
		}
		if(m>12)
		{
			m=1;
			y++;
		}
		max=day[m];
	    if(m==2 && ((y%4==0 && y%100!=0) ||(y%100==0 && y%400==0))) max++;
	}
	printf("%d",t);
	return 0;
}
