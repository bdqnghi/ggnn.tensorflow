/**
* @file homework.cpp
* @author ???
* @date 2011-11-16
* @description
* ??????: ????
*/


int main()
{
	int i, j, k;
	char a[1000];
	cin.getline(a, 1000);
	for (i=1;a[i]!='\0';i++) // ???1????2
	{
		if (a[i]==a[0]) a[i]=1;
		else a[i]=2;
	}
	a[0]=1;
	do
	{
		for (j=0;j<i;j++)
		{
			if (a[j]==2)
			{
				for(k=j-1;k>=0;k--)
				{
									if (a[k]==1)
					{
						cout<<k<<" "<<j<<endl;
						a[k]=0;
						a[j]=0;
						break;
					}
				}
		
			}
		}
	} while (a[0]!=0);
	return 0;
}
