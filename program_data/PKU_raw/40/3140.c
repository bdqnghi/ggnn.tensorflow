int main()
{double a,b,c,d,e,sum,k;

scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);


e/=360;

e*=3.1415926;sum=(a+b+c+d)/2;
sum=((sum-a)*(sum-b)*(sum-c)*(sum-d)-a*b*c*d*cos(e)*cos(e));
if(sum<0)printf("Invalid input");
else{sum=(a+b+c+d)/2;
sum=((sum-a)*(sum-b)*(sum-c)*(sum-d)-a*b*c*d*cos(e)*cos(e));
sum=sqrt(sum);
printf("%.4f\n",sum);}return 0;
}