int main()
{
	int n,y100,y50,y20,y10,y5,y1,y;
	scanf("%d",&n);
	y100=n/100;
	y=n-100*y100;
	y50=y/50;
	y=y-50*y50;
	y20=y/20;
	y=y-20*y20;
	y10=y/10;
	y=y-10*y10;
	y5=y/5;
	y=y-5*y5;
	printf("%d\n",y100);
	printf("%d\n",y50);
	printf("%d\n",y20);
	printf("%d\n",y10);
	printf("%d\n",y5);
	printf("%d\n",y);
	return 0;
}