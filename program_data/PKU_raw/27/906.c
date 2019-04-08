/*
 * ?????????.cpp
 *
 *  Created on: 2013-9-30
 *      Author: 111
 */

int main()
{
	int n;                                    //????
	double a,b,c,x1,x2,shibu,xubu,delt;
	cin>>n;
	for (int i=1;i<=n;i++)                    //?n?????
	{
		cin>>a>>b>>c;
		delt=b*b-4*a*c;                       //delt????
		if (delt>0)
		{
			x1=(-b+sqrt(delt))/(2*a);
			x2=(-b-sqrt(delt))/(2*a);         //??????????
			cout<<fixed<<setprecision(5);     //????5???
			cout<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
		}
		else
		{
			if (delt==0)
			{                                 //??????????
				x1=-b/(2*a);
				x2=-b/(2*a);
				cout<<fixed<<setprecision(5);
				cout<<"x1=x2="<<x1<<endl;
			}
			else
			{
				shibu=-b/(2*a);                //??????
				xubu=sqrt(-delt)/(2*a);
				cout<<fixed<<setprecision(5);
				if (shibu==-0)
				{
					shibu=0;
				}
				cout<<"x1="<<shibu<<"+"<<xubu<<"i;"<<"x2="<<shibu<<"-"<<xubu<<"i"<<endl;
			}
		}
	}
	return 0;
}
