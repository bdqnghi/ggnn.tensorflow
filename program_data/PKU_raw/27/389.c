//****************************************
//*?? ?????????                  **
//*?????? 1100013020       **
//*???2011.9.23                          **
//****************************************



int main()
{
	int i,n,j;
	double a[100],b[100],c[100],x1[100],x2[100],k[100],l[100],p[100];     //???????????
	i=1;
	j=1;
	cin>>n;
	for (;i<=n;)
	{
		cin>>a[i]>>b[i]>>c[i];
		if (b[i]*b[i]-4*a[i]*c[i]>=0)
		{
			x1[i]=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			x2[i]=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			if (x1[i]<0 || x1[i]>0)
				x1[i]=x1[i];
			else
				x1[i]=0.00000;
			if (x2[i]<0 || x2[i]>0)
				x2[i]=x2[i];
			else
				x2[i]=0.00000;

		}
		else
		{
			k[i]=-b[i]/(2*a[i]);
			l[i]=sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i]);
			p[i]=i;
			if (k[i]<0 || k[i]>0)
				k[i]=k[i];
			else
				k[i]=0.00000;
			if (l[i]<0 || l[i]>0)
				l[i]=l[i];
			else
				l[i]=0.00000;
		}
		i=i+1;
	}
	i=1;
	for (;i<=n;)
	{
		if (i<p[i] || i>p[i])
		{
			if (x1[i]<x2[i]||x1[i]>x2[i])
			{
				cout<<fixed<<setprecision(5)<<"x1="<<x1[i]<<";x2="<<x2[i]<<endl;
			}
			else
			{
				cout<<fixed<<setprecision(5)<<"x1=x2="<<x1[i]<<endl;
			}
		}
		else
		{
			cout<<fixed<<setprecision(5)<<"x1="<<k[i]<<"+"<<l[i]<<"i"<<";x2="<<k[i]<<"-"<<l[i]<<"i"<<endl;
			j=j+1;
		}
		i=i+1;
	}
	return 0;
}