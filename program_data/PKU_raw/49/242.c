/*
 * 1000012900.cpp
 *
 *  Created on: 2010-12-23
 *      Author: Princeyou
 */
int main()
{
	char a[500];
	cin >> a;
	int i,j,l,k,m,n,c;
	l=strlen(a);
	for(k=1;k<=l/2;k++)
	for(i=0;i<l;i++)
	{
		m=i;
		n=i+1;
		c=0;
		while(a[m]==a[n])
		{
			c++;
			if(c==k)
			{
				for(j=m;j<=n;j++)
				cout << a[j];
				cout << endl;
				break;
			}
				m--;
				n++;
		}
	}
		return 0;
}

