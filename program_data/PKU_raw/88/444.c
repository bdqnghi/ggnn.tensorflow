/*
 * gd.cpp
 *
 *  Created on: 2010-12-31
 *      Author: 10058
 */

int main()
{
	char c[50];
	cin.getline(c,50);
	int i=0;
	while(c[i]!='\0')
	{
		if(c[i]>='0'&&c[i]<='9')
		{
			cout<<c[i];
		}
		else
		{

			if(i!=0&&c[i-1]>='0'&&c[i-1]<='9')
			{
				cout<<endl;
			}
		}
		i++;
	}
	return 0;
}
