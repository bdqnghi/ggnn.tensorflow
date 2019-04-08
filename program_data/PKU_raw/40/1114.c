
int main()
{
	float a[4];
	float s,S,angle,t;
	int i;
	for(i=0;i<4;i++)
		scanf("%f\n",&a[i]);
	scanf("%f",&angle);
	s=(a[0]+a[1]+a[2]+a[3])/2;
	t=cos(angle*pi/360);
	S=sqrt((s-a[0])*(s-a[1])*(s-a[2])*(s-a[3])-a[0]*a[1]*a[2]*a[3]*t*t);
if((s-a[0])*(s-a[1])*(s-a[2])*(s-a[3])-a[0]*a[1]*a[2]*a[3]*t*t<0)printf("Invalid input");
	else printf("%.4f",S);
}

