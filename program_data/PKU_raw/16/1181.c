int main()
{
	int a,b,c,d,e,result;
	scanf("%d",&a);
	if(a==10000) printf("00001");
	else if(a<10000&&a>=1000) 
		{
		    b=a/1000;
			c=(a-b*1000)/100;
			d=(a-b*1000-c*100)/10;
			e=a-b*1000-c*100-d*10;
			result=e*1000+d*100+c*10+b;
			printf("%04d",result);
	}
	else if(a<1000&&a>=100)
	{
		b=a/100;
		c=(a-b*100)/10;
		d=a-b*100-c*10;
		result=d*100+c*10+b;
		printf("%03d",result);
	}
	else if(a<100&&a>=10)
	{
		b=a/10;
		c=a-b*10;
		result=c*10+b;
		printf("%02d",result);
	}
	else printf("%d",a);
	return 0;
}