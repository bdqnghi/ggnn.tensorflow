int main()
{
	int f;
	scanf("%d",&f);
	if(f==10000)
	{printf("00001\n");}
	else if(f>999&&f<=9999)
	{int a,b,c,d;
	a=1;
	while(f-a*1000>=0)
	{a++;}
	a=a-1;b=1;
	while(f-a*1000-b*100>=0)
	{b++;}
		c=1;b=b-1;
	while(f-a*1000-b*100-c*10>=0)
	{c++;}
		d=1;c=c-1;
	while(f-a*1000-b*100-c*10-d*1>=0)
	{d++;}d=d-1;
	printf("%d%d%d%d",d,c,b,a);}
    else if (f>99&&f<=999)
		{int a,b,c;
	a=1;
	while(f-a*100>=0)
	{a++;}
	a=a-1;b=1;
	while(f-a*100-b*10>=0)
	{b++;}
		c=1;b=b-1;
	while(f-a*100-b*10-c*1>=0)
	{c++;}
		c=c-1;
		printf("%d%d%d",c,b,a);}
	else if (f>9&&f<=99)
		{int a,b;
	a=1;
	while(f-a*10>=0)
	{a++;}
	a=a-1;b=1;
	while(f-a*10-b*1>=0)
	{b++;}
		b=b-1;
		printf("%d%d",b,a);}
	else 
	{printf("%d",f);}
	return 0;
}