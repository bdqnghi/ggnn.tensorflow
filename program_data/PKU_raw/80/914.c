int main()
{
	int y1,m1,d1,y2,m2,d2;
	int i;
	int x=0;
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	i=y1;
	for(i=y1;i<y2;i++){
		if(((i%4==0)&&(i%100!=0))||(i%400==0))
			x=x+366;
		else
			x=x+365;
	}
	switch(m1){
	case 1:break;
	case 2:x=x-31;break;
    case 3:x=x-59;break;
	case 4:x=x-90;break;
	case 5:x=x-120;break;
	case 6:x=x-151;break;
	case 7:x=x-181;break;
	case 8:x=x-212;break;
	case 9:x=x-243;break;
	case 10:x=x-273;break;
	case 11:x=x-304;break;
	case 12:x=x-334;break;
	}
	switch(m2){
	case 1:break;
	case 2:x=x+31;break;
    case 3:x=x+59;break;
	case 4:x=x+90;break;
	case 5:x=x+120;break;
	case 6:x=x+151;break;
	case 7:x=x+181;break;
	case 8:x=x+212;break;
	case 9:x=x+243;break;
	case 10:x=x+273;break;
	case 11:x=x+304;break;
	case 12:x=x+334;break;
	}
	x=x-d1+d2;
	if((((y1%4==0)&&(y1%100!=0))||(y1%400==0))&&m1>2)
		x=x-1;
    if((((y2%4==0)&&(y2%100!=0))||(y2%400==0))&&m2>2)
		x=x+1;
	printf("%d\n",x);
	return 0;
}