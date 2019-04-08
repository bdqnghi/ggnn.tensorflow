
int main()
{
	int a,b,c,day,m;
	scanf("%d %d %d",&a,&b,&c); 
	if(a%4==0&&a%100!=0||a%4==0&&a%400==0)
	{
		m=29;
	}
	else
	{
		m=28;
	}
	switch(b)
	{
		case 1:day=c;break;
		case 2:day=31+c;break;
		case 3:day=31+m+c;break;
		case 4:day=31+m+31+c;break;
		case 5:day=31+m+31+30+c;break;
		case 6:day=31+m+31+30+31+c;break;
		case 7:day=31+m+31+30+31+30+c;break;
		case 8:day=31+m+31+30+31+30+31+c;break;
		case 9:day=31+m+31+30+31+30+31+31+c;break;
		case 10:day=31+m+31+30+31+30+31+31+30+c;break;
        case 11:day=31+m+31+30+31+30+31+31+31+30+c;break;
        case 12:day=31+m+31+30+31+30+31+31+30+30+31+c;break;
	}
	printf("%d",day);
	return 0;
}