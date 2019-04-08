
int main(int argc, char* argv[])
{
	double a,b,c,d,A,S;
	cin>>a>>b>>c>>d;
	cin>>A;
	const double s=(a+b+c+d)/2;
	const double pi=3.1415926;
	if (((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(A/180*pi/2),2))<0) cout<<"Invalid input"<<endl;
	else
	{S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(A/180*pi/2),2));
	cout<<fixed<<setprecision(4)<<S<<endl;}
	
	return 0;
}