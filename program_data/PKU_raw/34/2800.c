/*
 * qmfx03.cpp
 *
 *  Created on: 2011-1-1
 *      Author: Administrator
 */
int main()
{
	int n;
	cin>>n;
	while(true)
	{
		if(n==1)
		{
			cout<<"End"<<endl;
			break;
		}
		if(n!=1&&n%2==1)
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			n=n*3+1;
		}
		if(n%2==0)
		{
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
		}
		if(n==1)
		{
			cout<<"End"<<endl;
			break;
		}
	}
	return 0;
}
