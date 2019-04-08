/*
 * kaoshi____1225.cpp
 *???????
 *  Created on: 2011-12-25
 *      Author: ???
 */
int main ()
{
	char a[50];
	cin.getline(a,50);
	int i=0,j;
	while (i<strlen(a))
	{
		while (a[i]<'0'||a[i]>'9')
		{
			i++;
			if ((a[i]>='0'&&a[i]<='9')||i==strlen(a)-1)
			{
				cout<<endl;
				break;
			}
			
		}
		if (i==strlen(a)-1&&(a[i]<'0'||a[i]>'9'))
						break;

		cout<<a[i];
		i++;
	}
	return 0;

}

