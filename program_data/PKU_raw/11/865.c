int run(int x)
{
	if((x%4==0 && x%100!=0)||(x%400==0))return 1;
	return 0;
}
int main()
{
	int y,m,d,x;
    scanf("%d %d %d",&y,&m,&d);
		if(run(y))
		{
			switch(m)
	{
	case 1:x=d;break;
	case 2:x=31+d;break;
	case 3:x=60+d;break;
	case 4:x=91+d;break;
	case 5:x=121+d;break;
	case 6:x=152+d;break;
	case 7:x=182+d;break;
	case 8:x=213+d;break;
	case 9:x=244+d;break;
	case 10:x=274+d;break;
	case 11:x=305+d;break;
	case 12:x=335+d;break;
		}
		}
		else{
			switch(m)
	{
	case 1:x=d;break;
	case 2:x=31+d;break;
	case 3:x=59+d;break;
	case 4:x=90+d;break;
	case 5:x=120+d;break;
	case 6:x=151+d;break;
	case 7:x=181+d;break;
	case 8:x=212+d;break;
	case 9:x=243+d;break;
	case 10:x=273+d;break;
	case 11:x=304+d;break;
	case 12:x=334+d;break;
		}
		}
		printf("%d",x);



	return 0;



}