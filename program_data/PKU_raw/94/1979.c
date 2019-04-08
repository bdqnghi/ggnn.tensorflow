/*
 * pratise.cpp
 *
 *  Created on: 2013-10-29
 *      Author: dyx
 */
int main()
{
	int n;
	cin >> n;
	int i;
	int z[n];
	int a=0;
	for(i=0;i<n;i++)
		cin >>z[i];
	sort(&z[0],&z[n]);
	for(i=0;i<n;i++)
	{
		if(z[i]%2==1)
			if(a==0)
			{
				cout << z[i];
				a++;
			}
			else
				cout << "," << z[i];

	}





}
