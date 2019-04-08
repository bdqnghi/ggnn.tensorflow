void main()
{
	int i,n;double *p;
	p=(double *)calloc(1,5*sizeof(double));
	scanf("%lf %lf %lf %lf %lf",p,p+1,p+2,p+3,p+4);

	double x,s=0;
	for(i=0;i<4;i++)
	{s+=*(p+i);}
	s=s/2;
	x=(s-*p)*(s-*(p+1))*(s-*(p+2))*(s-*(p+3))-*p**(p+1)**(p+2)**(p+3)*cos(*(p+4)/360*3.1415926)*cos(*(p+4)/360*3.1415926);
	if(x<0) printf("Invalid input");
	else{x=sqrt((s-*p)*(s-*(p+1))*(s-*(p+2))*(s-*(p+3))-*p**(p+1)**(p+2)**(p+3)*cos(*(p+4)/360*3.1415926)*cos(*(p+4)/360*3.1415926));
    printf("%.4lf",x);}
}