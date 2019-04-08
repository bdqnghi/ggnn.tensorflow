/*
 * qimofuxi_11.cpp
 * ????????C????????
 *  Created on: 2010-12-18
 *      Author: william
 */
int main()
{
	int n, m, b[1000];
	char a[1000][100];
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++)
	{
   		cin.getline(a[i],100);
		b[i]=strlen(a[i]);
	}
	for(int j=0; j<n; j++)
	{
		if(!(a[j][0]=='_'||(a[j][0]>='A'&&a[j][0]<='Z')||(a[j][0]>='a'&&a[j][0]<='z')))
		{
			cout<<0<<endl;
		}
		else
		{
			m=1;
			for(m=1; m<b[j]; m++)
			{
				if(!(a[j][m]=='_'||(a[j][m]>='A'&&a[j][m]<='Z')||(a[j][m]>='a'&&a[j][m]<='z')||(a[j][m]>='0'&&a[j][m]<='9')))
				{
					cout<<0<<endl;
					break;
				}
			}
			if(m==b[j]) cout<<1<<endl;
		}
	}
	return 0;
}