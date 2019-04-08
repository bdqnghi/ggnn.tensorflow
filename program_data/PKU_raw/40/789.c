int main(){
double a,b,c,d,s,x,Y;

scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
s=1.0/2*(a+b+c+d); 
x/=2;
Y=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(x*3.1415926/180)*cos(x*3.1415926/180)); 
if((s-a)*(s-b)*(s-c)*(s-d) < a*b*c*d*cos(x*3.1415926/180)*cos(x*3.1415926/180)){
printf("Invalid input");
}else{
	printf("%.4lf",Y);
}
return 0;
}