void main()
{
    int reverse(int num);
	int a1,a2,a3,a4,a5,a6;
	scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",reverse(a1),reverse(a2),reverse(a3),reverse(a4),reverse(a5),reverse(a6));
}
int reverse(int num)
{
	int mun,p1,p2,p3,p4,p5;
	if(fabs(num)<10) mun=num;
	else if(fabs(num)>=10&&fabs(num)<100)  p1=num/10,p2=num-p1*10,mun=p2*10+p1;
    else if(fabs(num)>=100&&fabs(num)<1000)  p1=num/100,p2=(num-p1*100)/10,p3=num-p1*100-p2*10,mun=p3*100+p2*10+p1;
    else if(fabs(num)>=1000&&fabs(num)<10000)  p1=num/1000,p2=(num-p1*1000)/100,p3=(num-p1*1000-p2*100)/10,p4=num-p1*1000-p2*100-p3*10,mun=p4*1000+p3*100+p2*10+p1;
    else if(fabs(num)>=10000) p1=num/10000,p2=(num-p1*10000)/1000,p3=(num-p1*10000-p2*1000)/100,p4=(num-p1*10000-p2*1000-p3*100)/10,p5=num-p1*10000-p2*1000-p3*100-p4*10,mun=p5*10000+p4*1000+p3*100+p2*10+p1;
    return(mun);
}