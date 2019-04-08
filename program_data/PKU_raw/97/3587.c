int main()
{
	int x,a,b,c,d,e,f;
	scanf("%d",&x);
	if(x>=100)
	{
		a=x/100;
		b=(x-a*100)/50;
		c=(x-a*100-b*50)/20;
		d=(x-a*100-b*50-c*20)/10;
		e=(x-a*100-b*50-c*20-d*10)/5;
		f=x-a*100-b*50-c*20-d*10-e*5;
	}
	else
	{
		if(x>=10)
		{
			a=0;
		b=(x-a*100)/50;
		c=(x-a*100-b*50)/20;
		d=(x-a*100-b*50-c*20)/10;
		e=(x-a*100-b*50-c*20-d*10)/5;
		f=x-a*100-b*50-c*20-d*10-e*5;
		}
		else
		{
			a=0;
			b=0;
			c=0;
			f=0;
		e=(x-a*100-b*50-c*20-d*10)/5;
		f=x-a*100-b*50-c*20-d*10-e*5;
		}
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}