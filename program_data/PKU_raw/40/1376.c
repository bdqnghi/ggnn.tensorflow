double sqrt(double p);
double cos(double j);
int main(){
	double p;
	double a,b,c,d;
	double j;
    double S,s;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	scanf("%lf",&j);
	s = (a+b+c+d)/2;
	p=((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(j*3.1415926/360)*cos(j*3.1415926/360)); 
	
if(p>0)	{S = sqrt(p);
	printf("%.4lf",S);}
else{
printf("Invalid input");}
    return 0;
}
	