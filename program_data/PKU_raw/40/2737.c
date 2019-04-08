


int main()
{
	double a,b,c,d,aq,s,re;
	cin>>a>>b>>c>>d>>aq;
	if(a+b+c>d&&a+c+d>b&&a+b+d>c&&b+c+d>a)
	{
		s=(a+b+c+d)/2;
		re=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(aq*Pi/360)*cos(aq*Pi/360)); 
		printf("%.4lf",re);
	}
	else cout<<"Invalid input";
}