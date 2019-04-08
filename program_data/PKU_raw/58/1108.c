/*
 * biaozhun.cpp
 *
 *  Created on: 2010-11-24
 *      Author: lz
 */

int main()
{
	int n;
	int i;
	char c[105][85];
	cin>>n;
	for(i=0;i<=n;i++)
		cin.getline(c[i],85);//?????????
	for(i=1;i<=n;i++)
	{
		int j=0;
		if(c[i][j]!='_'&&(c[i][j]<'A'||c[i][j]>'z'||(c[i][j]>'Z'&&c[i][j]<'a')))//??????
			cout<<"0"<<endl;
		else
		{
			j++;
			while(c[i][j]!='\0')
			{
				if(c[i][j]!='_'&&(c[i][j]<'0'||c[i][j]>'9'&&c[i][j]<'A'||c[i][j]>'Z'&&c[i][j]<'a'||c[i][j]>'z'))
					//????
				{
					cout<<"0"<<endl;
					break;
				}
				else
					j++;
			}
			if(c[i][j]=='\0')//??????
				cout<<"1"<<endl;
		}
	}
	return 0;
}
