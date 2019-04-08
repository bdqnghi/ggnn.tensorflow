void main()
{
	int year(int x);
	int diy(int x,int y,int z);
	int a,b,c,d,e,f,y1,y2,an;
scanf("%d %d %d",&a,&b,&c);
scanf("%d %d %d",&d,&e,&f);
y1=year(a)+diy(a,b,c);
y2=year(d)+diy(d,e,f);
an=y2-y1;
printf("%d\n",an);
}
int year(int x)
{
	int ay,by;
	ay=(x-1)/4-(x-1)/100+(x-1)/400;
	by=365*(x-1)+ay;
	return(by);
}
int diy(int x,int y,int z)
{
	int day=0,c,i,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if((x%4==0&&x%100!=0)||(x%400==0))c=1;else c=0;
	a[1]=a[1]+c;
	if(y==1)day=z;
	else
	{
		for(i=0;i<y-1;i++)
		{
			day=day+a[i];
		}
		day=day+z;
	}
	return(day);
}