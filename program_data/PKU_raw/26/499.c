/*
 * guolvkongge.cpp
 *
 *  Created on: 2011-1-8
 *      Author: Owner
 */

int main()
{
	char a[200];
	int i,j,k;
	int x,y;
	cin.getline(a,102);
	x=strlen(a);
	for(i=0;i<x;i++)
	{
		if(a[i]==' ')
		{
			for(j=i+1;j<x;j++)
			{
				if(a[j]!=' ')
				{
				    y=j;
				    break;
				}
			}
			int s=i;
			if(y-s>=2)
			{
				for(k=y;k<=x;k++)
					a[k-y+s+1]=a[k];
			}
		}
	}
	for(i=0;i<=x;i++)
	{
		if(a[i]=='\0')
			break;
	}
	int v=i;
	for(i=0;i<v;i++)
		cout<<a[i];
	return 0;
}