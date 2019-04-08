/*
 * ?????C????????.cpp
 *
 *  Created on: 2010-11-24
 *      Author: lenovo
 */
int main()
{
	int n,i,j;
	char a[100];
	cin>>n;
	cin.get();
	for (i=1;i<=n;i++)
	{   int t=0;
		cin.getline (a,100,'\n');
		if (!((a[0]=='_')||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')))
			cout<<'0'<<endl;
		else
		{
			for (j=1;j<strlen(a);j++)
				if (!((a[j]=='_')||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9')))
				{
					cout << '0' <<endl;
				    t++;
				    break;
				}
			  if (t==0)
				cout << '1' <<endl;
		}
	}
	return 0;
}