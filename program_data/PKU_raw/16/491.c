int main()
{
	int a,b1,b,c1,c,d1,d,x,y;
	scanf("%d",&x);
	a=x%10;
	b1=x%100;
	b=b1/10;
	c1=x%1000;
	c=c1/100;
	d1=x;
	d=d1/1000;
	if(d!=0)
	{
		y=a*1000+b*100+c*10+d;
		printf("%04d\n",y);
	}
	else if((d==0)&&(c!=0))
	{
		y=a*100+b*10+c;
		printf("%03d\n",y);
	}
	else if((c==0)&&(b!=0))
	{
		y=a*10+b;
		printf("%02d\n",y);
	}
	else
	{
		y=a;
		printf("%d\n",y);
	}
}