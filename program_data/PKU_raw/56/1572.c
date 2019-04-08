void main()
{
int a,b,c,d,e,f,s;
scanf("%d",&a);
if(a<10) s=a;
else if(a<100) 
{
	b=a%10;
    c=(a-b)/10;
	s=b*10+c;
}
else if(a<1000)
{
	b=a%10;
    c=(a-b)/10%10;
	d=(a-b-c*10)/100;
	s=b*100+c*10+d;
}
else if(a<10000)
{
	b=a%10;
    c=(a-b)/10%10;
	d=(a-b-c*10)/100%10;
	e=(a-b-c*10-d*100)/1000;
	s=b*1000+c*100+d*10+e;
}
else if(a<100000)
{
	b=a%10;
    c=(a-b)/10%10;
	d=(a-b-c*10)/100%10;
	e=(a-b-c*10-d*100)/1000%10;
	f=(a-b-c*10-d*100-e*1000)/10000;
	s=b*10000+c*1000+d*100+e*10+f;
}
printf("%d\n",s);
}