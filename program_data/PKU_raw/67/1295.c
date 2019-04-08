/*
 * qmfx02.cpp
 *
 *  Created on: 2011-1-1
 *      Author: Administrator
 */
int main()
{
	int n;
	cin>>n;
	double a,b,x;
	cin>>a>>b;
	x=b/a;
	while(n>1)
	{
		cin>>a>>b;
		if(b/a-x>0.05)
		{
			cout<<"better"<<endl;
		}
		if(b/a-x<-0.05)
		{
			cout<<"worse"<<endl;
		}
		if(b/a-x>=-0.05&&b/a-x<=0.05)
		{
			cout<<"same"<<endl;
		}
		n--;
	}
	return 0;
}
