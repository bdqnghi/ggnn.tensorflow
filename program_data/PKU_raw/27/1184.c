int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	double a,b,c;
	cin>>a>>b>>c;
	double delta=b*b-4*a*c;
	double x1,x2;
	if(delta>0)
	{
	x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
x2 = (-b - sqrt(b*b-4*a*c))/(2*a) ;
cout<<fixed<<setprecision(5)<<"x1="<<x1<<";x2="<<x2<<endl;
}
else if(delta==0) 
{
	cout<<fixed<<setprecision(5)<<"x1=x2="<<(-b/(2*a))<<endl;
}
else if(delta<0)
{
	if(-b/(2*a)==-0) b=-b;
	delta=-delta;
		cout<<fixed<<setprecision(5)<<"x1="<<-b/(2*a)<<"+"<<sqrt(delta)/(2*a)<<"i;x2="<<-b/(2*a)<<"-"<<sqrt(delta)/(2*a)<<"i"<<endl;
	
}
}
		
return 0;
}