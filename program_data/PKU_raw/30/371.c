/*
 * qz05.cpp
 *
 *  Created on: 2010-11-16
 *      Author: ??
 */
int main()
{
	int n,sum=0,i;
	cin>>n;                                                                         //????
	for(i=1;i<=n;i++)
	{
		if((i%7==0)||((i%10!=0)&&((i%10)%7==0))||(((i-i%10)>0)&&((i-i%10)%7==0)))
		{
			continue;																//???7????
		}
		else
		{
			sum=sum+i*i;															//???7????????
		}
	}
	cout<<sum;																		//?????
	return 0;
}
