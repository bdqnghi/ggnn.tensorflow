
double cos2(float alpha){
 return cos(alpha/360*PI)*cos(alpha/360*PI);
}

int main(){
double a,b,c,d,alpha,s,sum;
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&alpha);
s = (a+b+c+d)/2;
sum=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos2(alpha);
if(sum<0)
 printf("Invalid input\n");
else 
 printf("%.4lf\n",sqrt(sum));
}
