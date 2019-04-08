/*
 * ???.cpp
 *
 *  Created on: 2010-12-24
 *      Author: lenovo
 */
int main()
{
	int n,i;
	cin>>n;
	int year,month1,month2;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},
	    b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	for (i=1;i<=n;i++)
	{
		cin>>year>>month1>>month2;
		int c,d;
		d=(month1>month2)?month1:month2;
		c=(month1>month2)?month2:month1;

		if ((year%4==0)&&(year%100!=0)||(year%400==0))
		{
			int sum=0;
			for (int j=c;j<d;j++)
				sum=sum+b[j];
			if (sum%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
		{
					int sum=0;
					for (int j=c;j<d;j++)
						sum=sum+a[j];

					if (sum%7==0)
						cout<<"YES"<<endl;
					else
						cout<<"NO"<<endl;
		}
	}
	return 0;
}
