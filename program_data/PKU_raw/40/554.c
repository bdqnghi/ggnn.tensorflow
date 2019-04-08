int main(int argc, char* argv[])
{
	double a1,a2,a3,a4,b;
	double s,sum;
	scanf("%lf%lf%lf%lf%lf",&a1,&a2,&a3,&a4,&b);
    s=0.5*(a1+a2+a3+a4);
	sum=sqrt((s-a1)*(s-a2)*(s-a3)*(s-a4)-a1*a2*a3*a4*cos(b*3.1415926/360)*cos(b*3.1415926/360));
	if((s-a1)*(s-a2)*(s-a3)*(s-a4)<0)
		printf("Invalid input");
	else
	printf("%.4lf",sum);
	return 0;
}

