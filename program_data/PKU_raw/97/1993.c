int main()
{
int x,a,b,c,d,e,f;
scanf("%d",&x);
a=(x-x%100)/100;
x=x-100*a;
b=(x-x%50)/50;
x=x-50*b;
c=(x-x%20)/20;
x=x-20*c;
d=(x-x%10)/10;
x=x-10*d;
e=(x-x%5)/5;
f=x-5*e;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
return 0;
}
