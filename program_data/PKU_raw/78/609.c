/*
 * ???.cpp
 *
 *  Created on: 2013-10-13
 *      Author: 111
 */
int main()
{
	int z,q,s,l,i,sum=0;
	for (z=10;z<=50;z=z+10)             //????for??
	{
		for (q=10;q<=50;q=q+10)
		{
			for (s=10;s<=50;s=s+10)
			{
				for (l=10;l<=50;l=l+10)
				{
					sum=(z!=q)+(z!=s)+(z!=l)+(q!=s)+(q!=l)+(s!=l)+(z+q==s+l)+(z+l>s+q)+(z+s<q);
							if (sum==9)     //??9??????
							{
								for (i=50;i>=10;i=i-10)
								{
			                    if (z==i)
								cout<<'z'<<' '<<z<<endl;    //??????
			                    if (q==i)
								cout<<'q'<<' '<<q<<endl;
			                    if (s==i)
								cout<<'s'<<' '<<s<<endl;
			                    if (l==i)
							    cout<<'l'<<' '<<l<<endl;
								}
							}
				}
			}
		}
	}
	return 0;
}

