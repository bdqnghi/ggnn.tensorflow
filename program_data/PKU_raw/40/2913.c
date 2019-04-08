double area(double a,double b,double c,double d,double e){
    double s,sa;
    e=3.1415926*e/180/2;
    s=(a+b+c+d)/2;
    sa=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e)*cos(e);
    if(sa<0)
        return -1;
    else
        return sqrt(sa);
}
int main(){
    double a,b,c,d,e,ans;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    ans=area(a,b,c,d,e);
    if(ans<0)
        printf("Invalid input\n");
    else
        printf("%0.4lf\n",ans);
    return 0;
}
