int main ()
{
	double pi=3.1415926,f,s=0,a[4];
	int i;
	for(i=0;i<4;i++)
		scanf("%lf",&a[i]);
	scanf("%lf",&f);
	f=pi/360*f;
	void he(double,double,double,double,double);
    he(a[0],a[1],a[2],a[3],f);

	
}
void he(double a,double b,double c,double d,double f1)
{  int i;
    double sum,s;
   s=a/2+b/2+c/2+d/2;
    sum=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f1)*cos(f1);
	if(sum<0) printf("Invalid input");
	else
	{
		sum=sqrt(sum);
		printf("%.4f",sum);
	}
}