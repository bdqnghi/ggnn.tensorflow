/*
 * huiwenzichuan.cpp
 *
 *  Created on: 2011-12-21
 *      Author: Administrator
 */
int main()
{
	char chuan[500];
	cin>>chuan;
	int lenth=strlen(chuan);
	int i,j;
	for(int k=1;k<lenth;k++)
	{
		for(i=0,j=k;j<lenth;i++,j++)
		{
			int begin=i,end=j;
			while(begin<end)
			{
				if(chuan[begin]!=chuan[end])
				{
					break;
				}
				else
				{
					begin++;
					end--;
				}
			if(begin>=end)
			{
				for(int a=i;a<=j;a++)
				{
					cout<<chuan[a];
				}
				cout<<endl;
			}
			}
		}
	}
	return 0;
}