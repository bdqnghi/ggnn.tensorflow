int main()
{
int n,i,k,a=0,b=0,c=0,d=0;
double a1,b1,c1,d1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&k);
if(k<=18)
{a++;}
else if(k<=35)
{b++;}
else if(k<=60)
{c++;}
else 
{d++;}
}
a*=100;
b*=100;
c*=100;
d*=100;
a1=(double)(a)/n;
b1=(double)(b)/n;
c1=(double)(c)/n;
d1=(double)(d)/n;
printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",a1,b1,c1,d1);
return 0;
}