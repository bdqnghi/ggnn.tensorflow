/*
 * tiaosheng.cpp
 *
 *  Created on: 2011-12-23
 *      Author: 11161
 */

int main()
{
	int n;
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		int m;
		cin>>m;
		if(m==0){cout<<60<<endl;continue;}
		int times,sum1=0,sum2=0,w=0;int i=1;
		for(;i<=m;i++)
		{
			cin>>times;
			sum1=3*(i-1)+times;sum2=times;
			if(sum1>57)
			{
			if(sum1>60){cout<<60-(i-1)*3<<endl;}
			else{ cout<<times<<endl;}
			w=1;break;}	//sum1=sum1+3;
		}
		if(w==0){
			if(times>57){cout<<times<<endl;}
		else cout<<60-m*3<<endl;}
		else
		{
			for(int j=i+1;j<=m;j++)
			{
				cin>>times;
			}

		}
	}
	return 0;
}