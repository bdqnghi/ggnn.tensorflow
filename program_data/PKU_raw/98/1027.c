/*
 * homework3.cpp
 *
 *  Created on: 2012-12-4
 *      Author: Lixurong
 */

int main()
{
	char a[1000][41];
	int n;
	cin >> n;
	for( int i=0; i<n; i++ )
	{
		cin >> a[i];
	}
	int s=0;
	for( int i=0; i<n; i++ )
	{
		s+=strlen(*(a+i))+1;
		if(s>81)
		{
			s=0;
			cout << endl;
			i--;
			continue;
		}
		else
		{
			cout << (*(a+i));
			if( i!=n-1 && s+strlen(*(a+i+1))<=80)
			{
				cout << " ";
			}
		}
	}
}
