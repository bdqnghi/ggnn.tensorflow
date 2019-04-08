int main()
{
	int num,a,b,c,d;
	scanf("%d",&num);
	a=num/1000;
	b=(num-a*1000)/100;
	c=(num-a*1000-b*100)/10;
	d=num-a*1000-b*100-c*10;
	if(num==10000)
		printf("1\n");
	if(num>999)
	printf("%d%d%d%d\n",d,c,b,a);
		else if(num>99)
		    printf("%d%d%d\n",d,c,b);
		else if(num>9)
			printf("%d%d\n",d,c);
		else
			printf("%d\n",d);
		return 0;
}