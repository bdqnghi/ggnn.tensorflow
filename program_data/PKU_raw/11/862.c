int main()
{
	int y,m,d,t=0;
	int leap(int y);
	scanf("%d%d%d",&y,&m,&d);
	switch(m)
	{
	case 12:t+=30;
	case 11:t+=31;
	case 10:t+=30;
	case 9:t+=31;
	case 8:t+=31;
	case 7:t+=30;
	case 6:t+=31;
	case 5:t+=30;
	case 4:t+=31;
	case 3:t+=28;
	case 2:t+=31;
	case 1:t+=0;
	}
	if(m>2&&leap(y))
	{
		t+=1;
	}
	t+=d;
	printf("%d",t);
	return 0;
}
int leap(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}