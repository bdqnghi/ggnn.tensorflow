main()
{
	int a,b,c,d,e,x;
	scanf("%5d",&x);
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	x=e*10000+d*1000+c*100+b*10+a;
loop:if(x%10==0)
	 {
		 x=x/10;
		 goto loop;
	 }
	 else printf("%d\n",x);
}