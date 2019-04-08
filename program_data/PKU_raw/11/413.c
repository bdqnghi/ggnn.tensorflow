int main ()
{
	int daysa[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int daysb[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m,d;
	int num=0;
	scanf("%d%d%d",&y,&m,&d);
	int i;
	if((y%4==0&&y%100!=0)||(y%400==0))
	{
		for(i=1;i<=m-1;i++)
		{
			num=num+daysa[i-1];
		}
	    num=num+d;
	}
	else 
	{
		for(i=1;i<=m-1;i++)
		{
			num=num+daysb[i-1];
		}
	    num=num+d;
	}
	printf("%d\n",num);
	return 0;
}
