int main()
{
	int A,a,b,c,d,e;
	scanf("%d",&A);
	a=A/10000;
	b=(A-a*10000)/1000;
	c=(A-a*10000-b*1000)/100;
	d=(A-a*10000-b*1000-c*100)/10;
	e=A-a*10000-b*1000-c*100-d*10;
	if(a!=0)
		printf("%d%d%d%d%d",e,d,c,b,a);
	if(a==0&&b!=0)
		printf("%d%d%d%d",e,d,c,b);
	if(a==0&&b==0&&c!=0)
		printf("%d%d%d",e,d,c);
	if(a==0&&b==0&&c==0&&d!=0)
		printf("%d%d",e,d);
	if(a==0&&b==0&&c==0&&d==0&&e!=0)
		printf("%d",e);
	return 0;
}
