/*
 * ?????.cpp
 *
 *  Created on: 2012-10-23
 *      Author: ???
 *
 */
int main ()
{
	double a,b;
	double rate1,rate2;
	int n;
	cin>>n;
	cin>>a>>b;
	rate1=b/a;
	for (int i=0;i<n-1;i++)
	{    double c,d;
		 cin>>c>>d;
	     rate2=d/c;
	     if (rate1-rate2<=0.05 && rate2-rate1<=0.05)
	    	 cout<<"same"<<endl;
	     else if (rate1-rate2>0.05)
	    	 cout<<"worse"<<endl;
	     else
	    	 cout<<"better"<<endl;
	}
	return 0;
}

