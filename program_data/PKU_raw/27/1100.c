/*
 * return.cpp
 *
 *  Created on: 2014-1-25
 *      Author: ???
 */
int main()
{
	int n;
	double a,b,c,d;
	cin>>n;
	cout<<fixed<<setprecision(5);
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if(b==0)
			b=-b;
		d=b*b-4*a*c;
		if(d==0)
		{
			cout<<"x1=x2="<<(-b)/(2*a)<<endl;
		}
		else if(d>0)
		{
			cout<<"x1="<<(-b+sqrt(d))/(2*a)<<";x2="<<(-b-sqrt(d))/(2*a)<<endl;
		}
		else
		{
			double xd=sqrt(-d)/(2*a);
			cout<<"x1="<<(-b)/(2*a)<<'+'<<xd<<"i;x2="<<(-b)/(2*a)<<'-'<<xd<<'i'<<endl;
		}
	}
	return 0;
}
