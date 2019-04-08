int main()
{
	float a,b,c,d,e,s,S,t;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
    scanf("%f",&d);
	scanf("%f",&e);
	s=(a+b+c+d)/2.0;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2/180*PI)*cos(e/2/180*PI));
	t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2/180*PI)*cos(e/2/180*PI);
	if (t>0)
	   printf("%.4f\n",S);
	else
		printf("Invalid input");
	return 0;
}