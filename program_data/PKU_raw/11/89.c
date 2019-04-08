
int main(int argc, char* argv[])
{

	int y,m,d,days=0;
	scanf("%d %d %d",&y,&m,&d);
	switch(m)
	{	
	case 1:days=d;break;
	case 2:days=31+d;break;
	case 3:days=31+28+d;break;
	case 4:days=31+28+31+d;break;
	case 5:days=31+28+31+30+d;break;
	case 6:days=31+28+31+30+31+d;break;
	case 7:days=31+28+31+30+31+30+d;break;
	case 8:days=31+28+31+30+31+30+31+d;	break;
	case 9:days=31+28+31+30+31+30+31+31+d;	break;
	case 10:days=31+28+31+30+31+30+31+31+30+d;break;	
	case 11:days=31+28+31+30+31+30+31+31+30+31+d;break;	
	case 12:days=31+28+31+30+31+30+31+31+30+31+30+d;break;
	}


	/*if((y%4==0&&y%100!=0)||y%400==0)
		days=days+1;
	*/
	printf("%d\n",days);

	return 0;
}

