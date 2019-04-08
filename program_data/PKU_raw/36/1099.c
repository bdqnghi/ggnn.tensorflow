/*
 * ??????.cpp
 *
 *  Created on: 2011-12-25
 *      Author: Administrator
 */


int main()
{
	char str1[10000],str2[10000];
	int flag[10000] ={0};
	cin.getline(str1,10000);
	int i,j;
	for(i=0;str1[i]!=' ';i++);
	for(j=i+1;str1[j]!='\0';j++)
		str2[j-i-1]=str1[j];
	int len1,len2;
	len1=i;
	len2=j-i-1;
	if(len1!=len2)
		cout<<"NO"<<endl;
	else
	{
		for (i =0;i<len1;i++)
		{
			for (j =0;j<len1;j++)
				if(str1[i]==str2[j]&&flag[j]==0)
				{
					flag[j]=1;
					break;
				}
			if (j ==len1)
			{
				cout<<"NO"<<endl;
				break;
			}
		}
		if (i ==len1)
			cout<<"YES"<<endl;
	}



	return 0;
}
