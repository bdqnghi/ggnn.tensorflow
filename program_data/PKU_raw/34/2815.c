/*
 * qimofuxi_03.cpp
 *  ???????
 *  Created on: 2010-12-17
 *      Author: william
 */
int operation(int x)
{
	if(x%2==0)
    {
		cout<<x<<"/2="<<x/2<<endl;
		return x/2;
    }
	else
	{
		cout<<x<<"*3+1="<<3*x+1<<endl;
		return 3*x+1;
	}
}
int main()
{
    int x;
    cin>>x;
    for(;x!=1;)
    {
    	x=operation(x);
    }
    cout<<"End";
    return 0;
}
