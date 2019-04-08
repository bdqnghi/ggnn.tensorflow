int main()
{
int a,b,c,d,e,f,g,h,i;
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/50;
c=c%50;
e=c/20;
c=c%20;
f=c/10;
c=c%10;
g=c/5;
c=c%5;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,d,e,f,g,c);
return 0;
}