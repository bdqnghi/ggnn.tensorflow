int main()
{
	float a,b,c,d;
	float r;
	float s,S;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	scanf("%f",&r);
	if(r<0||r>360)
	{
		return 0;
	}
	else
	{
		s = (a+b+c+d)/2;
		S =(float) sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(r*3.1415926/360)*cos(r*3.1415926/360)); 
	}
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(r*3.1415926/360)*cos(r*3.1415926/360))<0)
	{
		printf("Invalid input\n");
	}
	else
	{
		printf("%.4f\n",S);
	}
	return 0;
}