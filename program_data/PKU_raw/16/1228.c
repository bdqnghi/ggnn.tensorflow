int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	if (a>999)
	{	b=a/1000;
	    c=(a-b*1000)/100;
		d=(a-b*1000-c*100)/10;
		e=(a-b*1000-c*100-d*10)/1;
		printf("%d%d%d%d",e,d,c,b);}
	else if (a>99)
	{	b=a/100;
		    c=(a-b*100)/10;
			d=(a-b*100-c*10)/1;
			printf("%d%d%d",d,c,b);}
	else if (a>9)
	{	b=a/10;
	    c=(a-b*10)/1;
			printf("%d%d",c,b);}
	else
		printf("%d",a);
	return 0;
		
    	
}