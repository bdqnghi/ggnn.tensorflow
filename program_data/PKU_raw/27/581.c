/*
 * ????????.cpp
 *
 *  Created on: 2012-10-14
 *      Author: Administrator
 */

int main()
{
	int n,i;
	float a[100],b[100],c[100];
	double x1,x2,delta,x;
	cin >> n;
	for (i=1;i<=n;i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	}
	for (i=1;i<=n;i++)
	{
		cout << fixed << setprecision(5);
		{
		    delta=b[i]*b[i]-4*a[i]*c[i];
		    x1=(-b[i] + sqrt(delta))/(2*a[i]);
		    x2=(-b[i] - sqrt(delta))/(2*a[i]);
		    if (delta==0)
		    {
		         cout << "x1=x2=" << x1 << endl;
		    }
		   if (delta>0)
		    {
			    cout << "x1=" << x1 << ";" << "x2=" << x2 <<endl;
		    }
	       if (delta<0)
		    {
			    x=(sqrt(-delta))/(2*a[i]);
			    cout << "x1=" << (-b[i]/(2*a[i])==0?b[i]/(2*a[i]):-b[i]/(2*a[i])) <<"+" << x << "i" <<";" << "x2=" << (-b[i]/(2*a[i])==0?b[i]/(2*a[i]):-b[i]/(2*a[i])) <<"-" << x << "i" <<endl;
		    }

		}

	}
	return 0;


}
