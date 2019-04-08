/*
 * huiwenxulie.cpp
 *
 *  Created on: 2011-12-21
 *      Author: Administrator
 */
int main()
{
	char p[501];
	cin.getline(p,501);
	int n=strlen(p);
	for(int k=2;k<=n;k++)
	{int i=0;
	int j;
		for(;i<=n-k;i++)
		{
			j=i+k-1;
			int c=i,d=j;
			while(i<j)
			{
				if(p[i]==p[j])
				{
					i++;j--;
				}
				else{break;}
				if(i>=j)
				{
					for(int s=c;s<=d;s++)
					{
						cout<<p[s];
					}
					cout<<endl;
				}

			}i=c;
		}
	}
	return 0;
}
