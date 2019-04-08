
double s,s2;
double size(double x);

int main()
{
    double a,b,c,d,jd;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&jd);

	s=(a+b+c+d)/2;
    
	s2=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(jd/180*PI/2)*cos(jd/2/180*PI);

	if(s2>=0)
		printf("%.4lf",size(s2));
	else
		printf("Invalid input");
	
	return 0;
}


double size(double x){
	return sqrt(s2);
}

