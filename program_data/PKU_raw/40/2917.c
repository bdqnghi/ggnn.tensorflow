float mianji(float a,float b,float c,float d,float e);
int main()
{
	float a,b,c,d,e,f;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	f=mianji(a,b,c,d,e);
	if(f==-1)
		printf("Invalid input");
	else
		printf("%.4f",f);
	return 0;
}

float mianji(float a,float b,float c,float d,float e)
{
	float s,m,q,S;
	e=e/360*PI;
	s=(a+b+c+d)/2;
	q=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e)*cos(e);
	if(q<=0) return -1;
	else S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e)*cos(e));
	return S;
	
}
