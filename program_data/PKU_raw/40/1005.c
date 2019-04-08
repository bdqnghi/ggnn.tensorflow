int main()
{
	float a,b,c,d,s,ans;
	double m,n;
    cin>>a>>b>>c>>d>>n;
	s=(a+b+c+d)/2;
	m=(n/2)*3.1415926/180;
	ans =sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m)); 
	if(( (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m)) <0 )
	{
		printf("Invalid input\n");
	}
	else
	{
		
		printf("%.4f",ans);
	}
	return 0;
}