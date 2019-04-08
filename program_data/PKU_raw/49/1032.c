
/*
 * homework3.cpp
 *
 *  Created on: 2012-12-4
 *      Author: Lixurong
 */


int main()
{
	char a[1002];
	cin >> a;
	for( int i=2; i<=strlen(a); i++ )
	{
		for( int j=0; j<=strlen(a)-i; j++ )
		{
			int p=0;
			for( int x=0; x<i; x++ )
			{
				if(a[j+x]!=a[j+i-x-1])
				{
					p=1;
					break;
				}
			}
			if(p==0)
			{
				for( int x=j; x<j+i; x++ )
				{
					cout << a[x];
				}
				cout << endl;
			}
		}
	}
}






