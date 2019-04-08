int main(int argc, char* argv[])
{
double a,b,c,d,e,f,h,s,i,j,S;
    scanf("%lf",&a);
	scanf("%lf",&b);
    scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	f=e/2;
	h=cos ((f/360)*2*3.1415926);
    s =(a+b+c+d)/2; 
	i=(s-a)*(s-b)*(s-c)*(s-d);
	j=(a*b*c*d*h*h);
	if( i-j<0){
	printf("Invalid input\n");
	}
else
    {S = sqrt(i-j); 
	printf("%.4lf\n",S);}
	return 0;
}

