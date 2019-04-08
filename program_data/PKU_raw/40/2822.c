float surface(float a,float b,float c,float d,float o);
void main()
{
	float a,b,c,d;
	float o;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	scanf("%f",&o);
	if(surface(a,b,c,d,o)==-1)
		printf("Invalid input");
	else
	printf("%.4f",surface(a,b,c,d,o));
}
float surface(float a,float b,float c,float d,float o){
    float face,s;
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(PI*o/360))*(cos(PI*o/360))<0)
	{
		return (-1);
	}
    else
	face=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(PI*o/360))*(cos(PI*o/360))) ;
	return face;
}