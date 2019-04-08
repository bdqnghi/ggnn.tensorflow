int main()
{
double a,b,c,d,angle;
 double s,m,n,p,q,o;
scanf("%lf\n%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d,&angle);
s=(a+b+c+d)/2;
m=s-a;
n=s-b;
p=s-c;
q=s-d;
o=angle/2;
double x,y,S,hudu;
hudu=3.1415926*o/180;
y=a*b*c*d*cos(hudu)*cos(hudu);
x=m*n*p*q;
S=x-y;
if(S>0)
{s=sqrt(S);
printf("%.4lf",s);
}
else{printf("Invalid input\n");}
return 0;
}

