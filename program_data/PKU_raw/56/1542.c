void main()
{
	int a,b,c,d,e,f,g,h,i,j;
	scanf("%d",&a);
	b=a/10000;
	c=a/1000;
	d=a/100;
	e=a/10;
	if(b>0)
	{
		f=c%10;
		g=(d%100)%10;
		h=((e%1000)%100)%10;
		i=(((a%10000)%1000)%100)%10;
		j=b+f*10+g*100+h*1000+i*10000;
	}
	else if(c>0)
	{
		f=d%10;
		g=(e%100)%10;
		h=((a%1000)%100)%10;
		j=c+f*10+g*100+h*1000;
	}
	else if(d>0)
	{
		f=e%10;
		g=(a%100)%10;
		j=d+f*10+g*100;
	}
	else if(e>0)
	{
		f=a%10;
		j=f*10+e;
	}
	else
		j=a;
	printf("%d",j);
}