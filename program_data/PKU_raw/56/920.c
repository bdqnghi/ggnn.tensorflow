void main()
{
int x,a,b,c,d,e,f;
scanf("%d",&x);
if(x>=10000)
{
	a=(int)(x/10000);
	b=(int)((x-a*10000)/1000);
	c=(int)((x-a*10000-b*1000)/100);
	d=(int)((x-a*10000-b*1000-c*100)/10);
	e=x-a*10000-b*1000-c*100-d*10;
	f=e*10000+d*1000+c*100+b*10+a;
	printf("%d\n",f);
}
else if((x<10000)&&(x>=1000))
{
	a=(int)(x/1000);
	b=(int)((x-a*1000)/100);
	c=(int)((x-a*1000-b*100)/10);
	d=x-a*1000-b*100-c*10;
	e=0;
	f=e*0+d*1000+c*100+b*10+a;
	printf("%d\n",f);
}
else if((x<1000)&&(x>=100))
{
	a=(int)(x/100);
	b=(int)((x-a*100)/10);
	c=x-a*100-b*10;
	d=0;
	e=0;
	f=c*100+b*10+a;
	printf("%d\n",f);
}
else if((x<100)&&(x>=10))
{
	a=(int)(x/10);
	b=x-a*10;
	c=0;
	d=0;
	e=0;
	f=b*10+a;
    printf("%d\n",f);
}
else if(x<10)
printf("%d\n",x);
}