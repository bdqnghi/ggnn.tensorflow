/*????
 * 12.10.17a.cpp
 *  Created on: 2012-10-17
 *      Author:???
 *      ???????????????????
 */
int main()
{	int n,a,b,c=0,d=0,i=1;
	cin>>n;
	while(i<=n)
	{
		for(;i<=n;i++)
		{cin>>a>>b;
		if(a>=90&&a<=140&&b>=60&&b<=90)
			{d=d+1;
			continue;
			}
		else
			{ if(d>c)
					{
					c=d;d=0;i++;break;
					}
			else {d=0;i++;break;}
			}
		}
	}
	if(d>c)c=d;
	cout<<c;
return 0;
}