int main()
{
double a,b,c,d,e,s,S;

scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
s=(a+b+c+d)/2.0;
if (((s-a)*(s-b)*(s-c)*(s-d))<=0) {
	printf("Invalid input\n");
}
else{
S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(PI*e/360.0)*cos(PI*e/360.0)); 
printf("%.4lf\n",S);
}
return 0;
}
