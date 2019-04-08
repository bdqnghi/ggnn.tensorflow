int main(){
double a,b,c,d,e,n,s,x1,x2;
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
s=(a+b+c+d)/2;
n=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos((e*PI)/360)*cos((e*PI)/360);
if(n>=0){
x1=1;
x2=(x1+n/x1)/2;
while(x2-x1>JINGDU||x1-x2>JINGDU){
x1=x2;
x2=(x1+n/x1)/2;
}
printf("%.4lf",x2);
}
else if(n<0){
printf("Invalid input");
}
return 0;
}