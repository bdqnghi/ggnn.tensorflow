
int main(int argc, char* argv[])
{
	float a,b,c,d;
	double S,s,o,m;
	#define PI 3.1415927
	scanf("%f%f%f%f%lf",&a,&b,&c,&d,&o);
	s = (a+b+c+d)/2;
	m=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(o/2*PI/180)*cos(o/2*PI/180);
	if(m<0)
	{
		printf("Invalid input\n");
	}
	else
	{
		S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(o/2*PI/180)*cos(o/2*PI/180));
	printf("%.4lf\n",S);
	}


	return 0;
}
