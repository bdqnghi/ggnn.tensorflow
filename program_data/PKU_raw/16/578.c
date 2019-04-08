int main()
{
	long x;
	int y,a,b,c,d,e;
	scanf("%ld",&x);
	y=log10(x);
	a=x/10000;
    b=(x-a*10000)/1000;
    c=(x-a*10000-b*1000)/100;
    d=(x-a*10000-b*1000-c*100)/10;
    e=x-a*10000-b*1000-c*100-d*10;
	switch(y)
	{
	case 0:printf("%d",e);break;
	case 1:printf("%d%d",e,d);break;
	case 2:printf("%d%d%d",e,d,c);break;
	case 3:printf("%d%d%d%d",e,d,c,b);break;
	case 4:printf("%d%d%d%d%d",e,d,c,b,a);break;
          default: printf("0");
	}
	return 0;
}
