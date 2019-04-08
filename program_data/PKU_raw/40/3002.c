int main()
{
double a,b,c,d;
double A;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
scanf("%lf",&d);
scanf("%lf",&A); 
double s=(a+b+c+d)/2; 
double B=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(A/360*PI)*cos(A/360*PI);
if(B<0)
printf("Invalid input");
else
{
double H=(double)sqrt(B);
printf("%.4lf",H);
}    
return(0);          
} 
