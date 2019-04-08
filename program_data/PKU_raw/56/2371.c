void main()
{
int a,b,c,d,e,x;
scanf("%d",&x);
a=x%10;
e=x/10000;
d=(x-10000*e)/1000;
c=(x-10000*e-1000*d)/100;
b=(x-10000*e-1000*d-100*c)/10;
if(a!=0)printf("%d",a);
if(b!=0)printf("%d",b);
if(c!=0)printf("%d",c);
if(d!=0)printf("%d",d);
if(e!=0)printf("%d",e);
}