/*
 * draft2.cpp
 *
 *  Created on: 2014-1-4
 *      Author: Mac
 */


char a[600], b[100], b1[100], *p;



int main()
{
	cin >> a;
	for(int len = 1; len < strlen(a); len++)
		for(int i = 0; i < strlen(a) - len; i++)
			{
			int j = 0;
			for(j = 0; j <= len/2; j++)
				{
				if(a[i+j] != a[i+len-j])
					break;
				}
			if (j == len/2 + 1)
				{
				for(int t = 0; t <= len; t++ )
					cout << a[i+t];
				cout << endl;
				}

			}
}
