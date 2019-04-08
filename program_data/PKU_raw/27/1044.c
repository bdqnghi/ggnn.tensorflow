/*
 * hw20130925(7.cpp
 *
 *  Created on: 2013-9-28
 *      Author: KyLin
 */
int main ()
{
	int n1;                      //???????
	cin>>n1;
	const int n=n1;
	int t;
	double deta;
	double a[n],b[n],c[n];        //a,b,c????x1?x2???real????imag???,deta????
	double x1[n],x2[n];
	double real[n],imag[n];
	for (t=0;t<n;++t)
		a[t]=b[t]=c[t]=x1[t]=x2[t]=real[t]=imag[t]=0;    //??????
	for (t=0;t<n;++t)
		cin>>a[t]>>b[t]>>c[t];
	for (t=0;t<n;++t)
	{
		deta=b[t]*b[t]-4*a[t]*c[t];
		if (deta>0)                     //????deta??????
		{
			x1[t]=(-b[t]+sqrt(deta))/(2*a[t]);
			x2[t]=(-b[t]-sqrt(deta))/(2*a[t]);
			cout<<fixed<<setprecision(5)<<"x1="<<x1[t]<<";x2="<<x2[t]<<endl;
		}
		if (deta==0)
		{
			x1[t]=(-b[t])/(2*a[t]);
			x2[t]=x1[t];
			cout<<fixed<<setprecision(5)<<"x1=x2="<<x1[t]<<endl;
		}
		if (deta<0)
		{
			real[t]=(-b[t])/(2*a[t]);
			imag[t]=sqrt(abs(deta))/(2*a[t]);
			if (real[t]==0)
			{
				cout<<fixed<<setprecision(5)<<"x1="<<abs(real[t])<<"+"<<imag[t]<<"i;x2="<<abs(real[t])<<-imag[t]<<"i"<<endl;
			}
			else
				cout<<fixed<<setprecision(5)<<"x1="<<real[t]<<"+"<<imag[t]<<"i;x2="<<real[t]<<-imag[t]<<"i"<<endl;
		}
	}
	return 0;
}
