void main()
{
	double a[5],o,s,S;
	int i;
	for (i=1;i<=4;i++) scanf("%lf",&a[i]);
	scanf("%lf",&o);
	o=o/2;
	o=o/360*2*3.1415926;
	s=(a[1]+a[2]+a[3]+a[4])/2;
	S=(s-a[1])*(s-a[2])*(s-a[3])*(s-a[4])-a[1]*a[2]*a[3]*a[4]*cos(o)*cos(o);
	if (S<0) printf("%s","Invalid input");
	  else 
	  {
			S=sqrt(S);
			printf("%.4lf",S);
	  }
	
}
