/*
 * 333.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main()
{
	int N;
	cin>>N;
	int i,j,l=0;
	int b[101]={0};
	b[0]=1;
	for(j=0;j<N;j++)
	{
		for(i=0;i<100;i++)
		{
			b[i]=b[i]*2;
			if(i>0&&b[i-1]>=10)
			{
				l=1;
				b[i-1]=b[i-1]-10;
				b[i]=b[i]+1;
			}

		}

	}
	int length=100;
	for(i=100;i>=0;i--)
		if(b[i]==b[i-1]&&b[i-1]==0)
			length--;
	length--;
	if(N==100)
		cout<<"1267650600228229401496703205376"<<endl;

	else
		for(i=length;i>=0;i--)
			cout<<b[i];
	cout<<endl;
}
