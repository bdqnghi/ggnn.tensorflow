int main()
{
	float a,b,c,d,e;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	float s=(a+b+c+d)/2;
	float jiao=e*PI/180;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(jiao/2)*cos(jiao/2)<0)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4f",sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(jiao/2)*cos(jiao/2)));
	}

	return 0;
}

