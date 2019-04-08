int main()
{
	double a[4],corner,s=0,S,PI=3.1415926;
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%lf",&a[i]);
		s+=a[i];
	}
	s/=2;
	scanf("%lf",&corner);
	corner=corner*PI/180;
	S=(s-a[0])*(s-a[1])*(s-a[2])*(s-a[3]);
	S-=a[0]*a[1]*a[2]*a[3]*cos(corner/2)*cos(corner/2);
	if(S<0)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4f",sqrt(S));
	}
}