void main()
{
	int y1,m1,d1,y2,m2,d2,num1,num2,num,k;
	scanf("%d %d %d\n%d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	switch(m1)
	{
	case(1):
		num1=365-d1;break;
	case(2):
		num1=365-d1-31;break;
	case(3):
		num1=365-d1-31-28;break;
	case(4):
		num1=365-d1-31*2-28;break;
	case(5):
		num1=365-d1-31-28-30;break;
	case(6):
		num1=365-d1-31*3-28-30;break;
	case(7):
		num1=365-d1-31*3-28-30*2;break;
	case(8):
		num1=365-d1-31*4-28-30*2;break;
	case(9):
		num1=365-d1-31*5-28-30*2;break;
	case(10):
		num1=365-d1-31*5-28-30*3;break;
	case(11):
		num1=365-d1-31*6-28-30*3;break;
	case(12):
		num1=365-d1-31*7-28-30*4;break;
	}
	switch(m2)
	{
	case(1):
		num2=d2;break;
	case(2):
		num2=d2+31;break;
	case(3):
		num2=d2+31+28;break;
	case(4):
		num2=d2+31*2+28;break;
	case(5):
		num2=d2+31+28+30;break;
	case(6):
		num2=d2+31*3+28+30;break;
	case(7):
		num2=d2+31*3+28+30*2;break;
	case(8):
		num2=d2+31*4+28+30*2;break;
	case(9):
		num2=d2+31*5+28+30*2;break;
	case(10):
		num2=d2+31*5+28+30*3;break;
	case(11):
		num2=d2+31*6+28+30*3;break;
	case(12):
		num2=d2+31*6+28+30*4;break;
	}
	num=num1+num2+365*(y2-y1-1);
	for(k=y1+1;k<y2;k++)
		if((k% 4 == 0 && k % 100 != 0) || (k % 400 == 0))
			num++;
	if(((y1% 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0)) && ((m1==1) ||(m1==2 && d1!=29) ))
		num++;
	if(((y2% 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0)) && m2>=3)
		num++;
	printf("%d",num);
}