int main()
{
	float a,b,c,d,A,B;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&B);
	float s,S;
	A=(B/180)*PI;
	s=(a+b+c+d)/2;
	S=(float)sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(A/2)*cos(A/2));
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(A/2)*cos(A/2))<0)
		printf("Invalid input");
	else if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(A/2)*cos(A/2))>=0)
		printf("%.4f",S);
	return (0);
}















