
/*
 * homework3.cpp
 *
 *  Created on: 2012-12-4
 *      Author: Lixurong
 */

int main()
{
	int n;
	cin >> n;
	for( int i=0; i<n; i++ )
	{
		char a[40];
		cin >> a;
		if(a[strlen(a)-2]=='e' && a[strlen(a)-1]=='r')
		{
			a[strlen(a)-2]='\0';
		}
		else if(a[strlen(a)-2]=='l' && a[strlen(a)-1]=='y')
		{
			a[strlen(a)-2]='\0';
		}
		else
			a[strlen(a)-3]='\0';
		cout << a;
		if(i!=n-1) cout << endl;
	}
}













