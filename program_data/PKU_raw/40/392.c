void main()
{double SS(double a,double b,double c,double d,double jiao);
double a,b,c,d,jiao,s,j,pi=3.1415926,mianji;
scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&jiao);
s=1.0/2.0*(a+b+c+d);
j=jiao*pi/360.0;
if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(j)*cos(j))<0)
printf("Invalid input");
else {mianji=SS(a,b,c,d,jiao);printf("%.4lf",mianji);}
}
double SS(double a,double b,double c,double d,double jiao)
{double j,s,mianji,pi=3.1415926;
s=1.0/2.0*(a+b+c+d);
j=jiao*pi/360.0;
mianji=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(j)*cos(j)); 
return(mianji);
}