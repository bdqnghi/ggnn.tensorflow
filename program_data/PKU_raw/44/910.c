void reverse(int num)
{
	int a,b,c,d,e,f;
	f=abs(num);
	if(num<0)
		printf("-");
	{ if(f/10000==0)
	{
	   if(f/10==0)
		printf("%d\n",f);
	else if(f/100==0)
	{
		a=f/10;
		b=f-a*10;
		printf("%d\n",b*10+a);
	}
	else if(f/1000==0)
	{
		a=f/100;
		b=(f-a*100)/10;
		c=(f-a*100-b*10);
		printf("%d\n",c*100+b*10+a);
	}
	else
	{
		a=f/1000;
		b=(f-a*1000)/100;
		c=(f-a*1000-b*100)/10;
		d=(f-a*1000-b*100-c*10);
		printf("%d\n",d*1000+c*100+b*10+a);
	}
   }
	if(f/10000!=0)	
	{
		a=f/10000;
		b=(f-a*10000)/1000;
		c=(f-a*10000-b*1000)/100;
		d=(f-a*10000-b*1000-c*100)/10;
		e=(f-a*10000-b*1000-c*100-d*10);
		printf("%d\n",e*10000+d*1000+c*100+b*10+a);
	}}
	
}
	
	int main()
	{ 
		int i,num;
		for(i=1;i<=6;i++)
		{
			scanf("%d",&num);
			reverse(num);
		}
	}
