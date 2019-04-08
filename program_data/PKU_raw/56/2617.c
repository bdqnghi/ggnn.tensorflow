void main()
{
int x,a,b,c,d,e;
scanf("%d",&x);
a=x/10000;
b=(x-a*10000)/1000;
c=(x-a*10000-b*1000)/100;
d=(x-a*10000-b*1000-c*100)/10;
e=x-a*10000-b*1000-c*100-d*10;
if(a!=0)
x=e*10000+d*1000+c*100+b*10+a;
else if(b!=0)
x=e*1000+d*100+c*10+b;
else if(c!=0)
x=e*100+d*10+c;
else if(d!=0)
x=e*10+d;
printf("%d",x);
}
