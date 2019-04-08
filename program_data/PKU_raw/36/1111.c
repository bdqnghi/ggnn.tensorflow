/*
 * zfuchuanchongpai.cpp
 *
 *  Created on: 2011-12-28
 *      Author: Administrator
 */
int main()
{
	char a[100],b[100];
	cin>>a>>b;
	int number=0;
	int length1=strlen(a),length2=strlen(b);
	if(length1!=length2)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	int i=0,j=0,temp1,temp2;
	for (i=0;i<length1-1;i++)
	{
		for(j=0;j<length1-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp1=a[j];
				a[j]= a[j+1];
				a[j+1] = temp1;
			}
		}
	}

	for (i=0;i<length1-1;i++)
	{
		for(j=0;j<length1-i-1;j++)
		{
			if (b[j]>b[j+1])
			{
				temp2=b[j];
				b[j]= b[j+1];
				b[j+1] = temp2;
			}
		}
	}
	for(i=0;i<length1;i++)
	{
		if(a[i]==b[i])
		{
			number++;
		}
	}
	if(number==length1)
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}