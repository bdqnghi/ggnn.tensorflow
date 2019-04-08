
int main()
{

    float a,b,c,d;
	float angle,dangle;
	float p,q,outcome;
	float PI=3.1415926;
	scanf("%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&angle);
	float s;
	s=(a+b+c+d)/2;
	p=(s-a)*(s-b)*(s-c)*(s-d);
	dangle=(angle/360)*PI;
	q=a*b*c*d*(cos(dangle)*cos(dangle));
	if(p-q>0)
		{outcome=sqrt(p-q);
	printf("%.4f",outcome);}
	else 
		printf("Invalid input");
	return 0;
}

	




