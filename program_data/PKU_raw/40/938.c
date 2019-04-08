int main()
{
double a,b,c,d,x,s,m,y;
scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&x);
s=(a+b+c+d)/2;
m=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(x*3.1415926/360),2);
if(m>=0){
y=pow(m,0.5);
printf("%.4lf",y);
}else{
printf("Invalid input");
}
return 0;
}
