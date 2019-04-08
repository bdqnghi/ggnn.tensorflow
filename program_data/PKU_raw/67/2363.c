/*
 * shit.cpp
 *
 *  Created on: 2012-10-15
 *      Author: Administrator
 */

int main()
{
	int n;
	cin>>n;
	double a[n],b[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i]>>b[i];
	    a[i]=b[i]/a[i];
	    if(i!=0)
	    {
	    	if(a[i]-a[0]>0.05) cout<<"better"<<endl;
	    	else if(a[0]-a[i]>0.05) cout<<"worse"<<endl;
	    	else cout<<"same"<<endl;
	    }
	}
	return 0;
}
