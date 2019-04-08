/*
 * extractnum.cpp
 *
 *  Created on: 2011/12/25
 *      Author: guyu
 */
char b[31];
float remembernum[31];
char num[31][31];
void modify(char a[],int len)//delete all the blanks
	{
		int i=0,j=0;
		for(i=0;i<len;i++)
			if(a[i]==' ')
			{
				for(j=i;j<len;j++)
					a[j]=a[j+1];
			}
	}
void converse(char a[],int len)
	{
		int i=0,j=0;
		for(i=0;i<len;i++)
		{
			if(a[i]>='0'&&a[i]<='9')
			{
				for(j=i;j<len;j++)
				{
					if(a[j]<'0'||a[j]>'9')
						{cout<<endl;break;}
					else
					{
						cout<<a[j];
					}
				}
				i=j;
			}
		}
	}
int main()
{
	char a[31];
	cin.getline(a,31);
	int len,len1;
	len=strlen(a);
	modify(a,len);
	len1=strlen(a);
	converse(a,len1);
	return 0;
}