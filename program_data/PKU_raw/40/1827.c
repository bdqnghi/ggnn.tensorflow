void main()
{
	float a,b,c,d,e,ans;
	float sum,multi,anmul;
	float sq(float p,float q);
	float angle,angle2;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&angle2);
	sum=(a+b+c+d)/2;
	angle=angle2/2;
    multi=(sum-a)*(sum-b)*(sum-c)*(sum-d);
	e=cos(angle*3.1415926/180)*cos(angle*3.1415926/180);
	anmul=a*b*c*d*e;
	ans=sq(multi,anmul);
	if((multi-anmul)<0) printf("Invalid input");
	else printf("%.4f",ans);
}
float sq(float p,float q)
{
	float z;
	z=sqrt((p-q));
	return z;
}