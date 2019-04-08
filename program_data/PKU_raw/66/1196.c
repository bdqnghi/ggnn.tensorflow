
int main()
{
	int a,b,c,d,e=0,f,g,h;
	scanf("%d %d %d",&a,&b,&c);
	d=(a-1)/400;
	a=a-d*400;
	for(f=1;f<a;f++)
	{
		if((f%400==0)||(f%100!=0&&f%4==0))
			e=e+366;
		else
			e=e+365;
	}
	for(g=1;g<b;g++)
	{
		if(g==1||g==3||g==5||g==7||g==8||g==10)
			e=e+31;
		if(g==4||g==6||g==9||g==11)
			e=e+30;
		if(g==2)
		{
			if((a%400==0)||(a%100!=0&&a%4==0))
				e=e+29;
			else
				e=e+28;
		}
	}
	e=e+c;
	h=e%7;
	if(h==1)
		printf("Mon.\n");
	if(h==2)
		printf("Tue.\n");
	if(h==3)
		printf("Wed.\n");
	if(h==4)
		printf("Thu.\n");
	if(h==5)
		printf("Fri.\n");
	if(h==6)
		printf("Sat.\n");
	if(h==0)
		printf("Sun.\n");
	return 0;
}