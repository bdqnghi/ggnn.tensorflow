int main()
{
	double s,S,a,b,c,d,e,f,g;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
	s=(a+b+c+d)/2.0;
	f=PI*e/360.0;
	g=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f);
	if(g>0||g==0){
	    S=sqrt(g);
	    printf("%.4lf",S);
	}
	if(g<0)
        printf("Invalid input");
	return 0;
}