int main()
{
	int shu,i,jieguo;
	scanf("%d",&shu);
	if(shu<10)
		printf("%d",shu);
	if(shu>=10&&shu<100)
	{
		jieguo=shu/10+(shu-shu/10*10)*10;
		printf("%d",jieguo);
	}
	if(shu>=100&&shu<1000)
	{
		jieguo=shu/100+(shu-shu/100*100)/10*10+((shu-shu/100*100)-(shu-shu/100*100)/10*10)*100;
		printf("%d",jieguo);
	}
	if(shu>=1000&&shu<10000)
	{
		jieguo=shu/1000+(shu-shu/1000*1000)/100*10+(shu-shu/100*100)/10*100+(shu-shu/10*10)*1000;
		printf("%d",jieguo);
	}
	if(shu>=10000&&shu<100000)
	{
		jieguo=shu/10000+(shu-shu/10000*10000)/1000*10+(shu-shu/1000*1000)/100*100+(shu-shu/100*100)/10*1000+(shu-shu/10*10)*10000;
		printf("%d",jieguo);
	}

}