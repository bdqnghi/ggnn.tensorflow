
int main()
{
	double a,b,c,d,s=1,zzz,area;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&zzz);
	zzz=zzz*PI/360;
	s=0.5*(a+b+c+d);
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(zzz)*cos(zzz))<0)
	{
		printf("Invalid input");
		return 0;
	}
	area = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(zzz)*cos(zzz));
	printf("%.4lf\n",area);


	return 0;
}
