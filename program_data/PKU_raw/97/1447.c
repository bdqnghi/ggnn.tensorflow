int main()
{
int n,a,b,c,d,e,f;
scanf("%d",&n);
a=n/100;
b=(n-n/100*100)/50;
c=(n-(a*100+b*50))/20;
d=(n-(a*100+b*50+c*20))/10;
e=(n-n/10*10)/5;
f=(n-n/5*5);
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);

return 0;
}