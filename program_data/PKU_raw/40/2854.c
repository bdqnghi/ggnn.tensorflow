

float area(float a,float b,float c,float d,float s,float p);
	float a,b,c,d,m;
	float r,s,p=0,S;
int main()
{
    scanf("%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&m);
    S=area(a, b, c, d, s, p);
	if (S<0)
		printf("Invalid input\n");
	else
		printf("%.4f\n",S);
	return 0;
}
float area(float a,float b,float c,float d,float s,float p)
{
    p=(m* PI)/(2*180);
    s = (a+b+c+d)/2;
   if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(p)*cos(p))<0)
return -1;
    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(p)*cos(p));
    return S;
}
