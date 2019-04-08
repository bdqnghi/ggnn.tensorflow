int main()
{
float a,b,c,d,r,t,s;
scanf("%f%f%f%f%f",&a,&b,&c,&d,&t);
s=(a+b+c+d)/2;
r=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(t/360*3.1415926)*cos(t/360*3.1415926); 
if(r<0)
{
printf("Invalid input");
}
else
{
printf("%.4f",sqrt(r));
}
return 0;
}