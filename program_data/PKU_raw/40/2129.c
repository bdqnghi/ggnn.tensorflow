int main()
{
double a,b,c,d,sita,s,tmp;
a=b=c=d=sita=s=tmp=0;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
scanf("%lf",&d);
scanf("%lf",&sita);
s=(a+b+c+d)/2;
sita=sita*PI/360;
sita=cos(sita);
tmp=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*sita*sita;
if(tmp<0)
{
printf("Invalid input\n");
goto eof;
}
tmp=sqrt(tmp);
printf("%.4f",tmp);
eof:;
}