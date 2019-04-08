int main()
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
    if(n>=1000||n<1)
		printf("error\n");
	else{
		a=n/100; n=n%100;
		b=n/50; n=n%50;
		c=n/20; n=n%20;
		d=n/10;n=n%10;
		e=n/5;n=n%5;
		f=n;

	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	 printf("%d\n",d);
	 printf("%d\n",e);
	 printf("%d",f);}
	return 0;
}
