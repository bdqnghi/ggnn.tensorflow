/*
 * guolvkongge.cpp
 *
 *  Created on: 2010-11-20
 *      Author: lz
 */

int main()
{
	char c[105];
	cin.getline(c,105);
	int i=0;
	while(c[i]!='\0')
	{
		while(c[i]!=' '&&c[i]!='\0')
		{
			cout<<c[i];
			i++;
		}
		if(c[i]=='\0')
			break;
		cout<<c[i];
		i++;
		while(c[i]==' ')
			i++;
	}

    return 0;
}
