double f(double a);
int main(){
    double n,m;
    scanf("%lf",&n);
	m=f(n);
	printf("%.0lf",m);
	return 0;
}
double f(double a)
{
    double b;
	if(a==0) b=1.0;
    else if(a==1) b=2,0;
	else b=f(a-1)*2.0;
	return b;
}
