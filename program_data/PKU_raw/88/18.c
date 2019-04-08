/*
 * 1000012795-????.cpp
 *
 *  Created on: 2010-12-29
 *      Author: Administrator
 */
int main()
{
	char str[31];
	char a[31];
	int len,i,j=0,num=0,sum=0;
	cin.getline(str,31);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			a[j]=str[i];
			num=num+1;
			j=j+1;
		}
		if(str[i]<'0'||str[i]>'9')
		{
			for(j=0;j<num;j++)
			{
				if(a[j]!='0')
					break;
				sum=sum+1;
			}
			if(sum==num&&sum!=0)
			{
				cout<<"0"<<endl;
				num=0;
				sum=0;
			}
			else
			{
			for(j=sum;j<num-1;j++)
				cout<<a[j];
			cout<<a[num-1]<<endl;
			j=0;
			num=0;
			sum=0;
			}
		}
	}
	for(j=0;j<num;j++)
	{
		if(a[j]!='0')
			break;
		sum=sum+1;
	}
	if(sum==num&&sum!=0)
	    cout<<"0"<<endl;
	else
	{
	   for(j=sum;j<num-1;j++)
			cout<<a[j];
		cout<<a[num-1]<<endl;
	}
	return 0;
}
