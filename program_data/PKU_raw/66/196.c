int main(int argc, char* argv[])
{
	int a, b, c, q, i, j, s=0, d=0;
	scanf("%d%d%d", &a, &b, &c);
	int x[12];
	x[0]=31;
	x[2]=31;
	x[3]=30;
	x[5]=30;
	x[4]=31;
	x[6]=31;
	x[7]=31;
	x[8]=30;
	x[10]=30;
	x[9]=31;
	x[11]=31;
	if (a<=2000)
	{
		for (i=1;i<a;i++)
	{
		if (i%400==0||(i%4==0&&i%100!=0))
		{
			d=d+1;
		}
	}
	s=(a-1-d)*365+d*366;
	if (a%400==0||(a%4==0&&a%100!=0))
	{
		x[1]=29;
	}	
	else x[1]=28;
	}
	else 
	{
		a=a%2000;
		for (i=1;i<a;i++)
	{
		if (i%400==0||(i%4==0&&i%100!=0))
		{
			d=d+1;
		}
	}
	s=(a-1-d)*365+d*366;
	if (a%400==0||(a%4==0&&a%100!=0))
	{
		x[1]=29;
	}	
	else x[1]=28;
	}
	
	for (j=0;j<b-1;j++)
	{
		s=s+x[j];
	}
	s=s+c;
	q=s%7;
	switch(q){
	case 0:
		printf("Sun.\n");
        break;
		case 1:
		printf("Mon.\n");
        break;
		case 2:
		printf("Tue.\n");
        break;
		case 3:
		printf("Wed.\n");
        break;
		case 4:
		printf("Thu.\n");
        break;
		case 5:
		printf("Fri.\n");
        break;
		case 6:
		printf("Sat.\n");
        break;
	}
	return 0;
}