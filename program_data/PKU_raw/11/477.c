int main()
{
	int a,b,c,s;
	scanf("%d%d%d",&a,&b,&c);
	switch(b){
	case 1:
		s=c;
		break;
	case 2:
		s=c+31;
		break;
	case 3:
		s=c+31+28;
		break;
	case 4:
		s=c+31+28+31;
		break;
	case 5:
		s=c+31+28+31+30;
		break;
	case 6:
		s=c+31+28+31+30+31;
		break;
	case 7:
		s=c+31+28+31+30+31+30;
		break;
	case 8:
		s=c+31+28+31+30+31+30+31;
		break;
	case 9:
        s=c+31+28+31+30+31+30+31+31;
		break;
	case 10:
		s=c+31+28+31+30+31+30+31+31+30;
		break;
	case 11:
		s=c+31+28+31+30+31+30+31+31+30+31;
		break;
	case 12:
		s=c+31+28+31+30+31+30+31+31+30+31+30;
		break;
	}
	if((a%4==0&&a%100!=0||a%400==0)&&(b>2))
		s=s+1;
	printf("%d",s);
		return 0;
}