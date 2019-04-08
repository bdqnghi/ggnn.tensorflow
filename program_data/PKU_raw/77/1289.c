/*
 * yi.cpp
 *
 *  Created on: 2012-10-20
 *      Author: 7
 */
int main()
{
	char s[500];
	int left[500],num[500];
	int flag=0,temp;
	cin>>s;
	int l,i=0,k=0,j;
	for(i=0;i<500;i++)
		num[i]=1000;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==s[0])
		{
			left[k]=i;
			k++;
		}
		else
		{
			k--;
			num[flag]=left[k];
			num[flag+1]=i;
			flag=flag+2;
		}
	}
	for(i=0;i<flag;i=i+2)
	{
		for(j=0;j<flag-i;j=j+2)
		{
			if(num[j+1]>num[j+3])
			{
				temp=num[j];
				num[j]=num[j+2];
				num[j+2]=temp;
				temp=num[j+1];
				num[j+1]=num[j+3];
				num[j+3]=temp;
			}
		}
	}
		for(i=0;i<flag;i=i+2)
		{
			cout<<num[i]<<' '<<num[i+1]<<endl;
		}

}
