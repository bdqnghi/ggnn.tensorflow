int reverse(int num)
{
	int ge=0,shi=0,bai=0,qian=0,wan=0,out;
	int sign=1;
	if(num<0) sign=-1;
	if(num==0)
	{
		out=0;
		goto end;
	}
	num=abs(num);
	wan=(int)num/10000;
	qian=(int)(num-10000*wan)/1000;
	bai=(int)(num-1000*qian-10000*wan)/100;
	shi=(int)(num-1000*qian-100*bai-10000*wan)/10;
	ge=num-10000*wan-1000*qian-100*bai-10*shi;
	
	if(num<=9) out=num*sign;
    if(num<=99&&num>=10) out=(10*ge+shi)*sign;
    if(num>99&&num<=999) out=(100*ge+10*shi+bai)*sign;
	if(num>999&&num<=9999) out=(1000*ge+100*shi+10*bai+qian)*sign;
	if(num>9999) out=(ge*10000+shi*1000+bai*100+qian*10+wan)*sign;





end:return(out);
}
void main()
{
	int i,a[6];
	for(i=0;i<=5;i++)
	scanf("%d",&a[i]);
    for(i=0;i<=5;i++)
		a[i]=reverse(a[i]);
for(i=0;i<=5;i++)
printf("%d\n",a[i]);
}