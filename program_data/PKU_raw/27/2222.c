//***************************************************
//*????????????.cpp                            **
//*????? 1100012808                           **
//*???2011.09.25                                **
//*????????????????????        **
//***************************************************
int main() 
{  
	int n,i;
	float a,b,c;
	double x1,x2;
	cin >> n;
	for (i=1;i<=n;i=i+1)
	{
		cin >> a >> b >> c ;
		if ((b*b-4*a*c)>0)
		{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        cout << fixed << "x1=" << setprecision(5) << x1 << ";" << "x2=" << setprecision(5) << x2 << endl;
		}
		else if ((b*b-4*a*c)==0)
		{
		     x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			 cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl;
		}
		else 
		{
			cout << "x1=" << fixed << setprecision(5) << -b/(2*a)+1-1 << setprecision(5) << "+" <<sqrt(4*a*c-b*b)/(2*a) << 'i' << ";";
		    cout << "x2=" << fixed << setprecision(5) << -b/(2*a)+1-1 << setprecision(5) << -sqrt(4*a*c-b*b)/(2*a) << 'i' << endl;
		}
	}
	return 0;
}