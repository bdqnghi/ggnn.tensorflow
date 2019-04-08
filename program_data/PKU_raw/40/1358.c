
int main()
{
float a,b,c,d,f,s;
double e,S;

scanf("%f",&a);printf("\n");
scanf("%f",&b);printf("\n");
scanf("%f",&c);printf("\n");
scanf("%f",&d);printf("\n");
scanf("%f",&f);printf("\n");
e=f*PI/180;
s=(a+b+c+d)/2;
S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2)*cos(e/2));

if ((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2)*cos(e/2)<0)
printf("Invalid input\n");
else
printf("%.4lf\n",S);
return 0;
} 