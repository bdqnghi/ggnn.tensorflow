
void main(){
	double a[5],s=0.0,S,c,d,e;
	int i;
	for (i=0;i<5;i++)
	{
	scanf("%lf",&a[i]);
	}
	s=(double)(a[0]+a[1]+a[2]+a[3])/2;
	

	c=(double)(s-a[0])*(s-a[1])*(s-a[2])*(s-a[3]);
	d=(double)a[0]*a[1]*a[2]*a[3];
	e=(double)cos(a[4]*PI/2.0/180.0)*cos(a[4]*PI/2.0/180.0);
	if(c-d*e>=0){
	S=(double)sqrt(c-d*e);
	printf("%.4lf\n",S);
	}
	else printf("Invalid input\n");
}