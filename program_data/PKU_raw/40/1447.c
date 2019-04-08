int main(){
double a,b,c,d,f,S,s;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
scanf("%lf",&d);
scanf("%lf",&f);
S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((f/2)/180*PI)*cos((f/2)/180*PI)); 
if ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f/2)*cos(f/2)<0){
    printf("Invalid input");
}else{
    printf("%.4lf",S);
}
return 0;
}