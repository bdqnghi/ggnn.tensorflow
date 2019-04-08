/*
 * jiaogu.cpp
 *
 *  Created on: 2011-12-23
 *      Author: 11161
 */

int jiaogu(int n)
{ int result;
	if(n%2==1)
	{result=n*3+1;
		cout<<n<<"*3+1="<<result<<endl;
	}
	else
	{
		result=n/2;
		cout<<n<<"/2="<<result<<endl;
	}
	return result;
}
int main()
{
	int n,num;
	cin>>n;
	if(n==1){cout<<"End"<<endl;return 0;}
	else
	num=n;
	while(1)
	{
		num=jiaogu(num);
		if(num==1)break;
	}
	cout<<"End"<<endl;

}
