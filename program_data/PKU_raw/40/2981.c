int main(void)
{
	float a=0,b=0,c=0,d=0;
	float aa=180;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&aa);

	aa=aa/180*3.1415926;
	float S=0;
	float s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((double)aa/2)*cos((double)aa/2)<0)
	printf("Invalid input");
	else
	{
	S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((double)aa/2)*cos((double)aa/2));
	printf("%.4f",S);
	}
	return 0;
}