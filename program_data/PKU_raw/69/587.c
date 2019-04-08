/*
 * 11.282.3.cpp
 *
 *  Created on: 2012-11-25
 *      Author: Administrator
 */
char str1[270];
char str2[270];
char str3[270];
void huanwei(char x[],int y)//??????????
{
	int i,j;
	char t;
	for(i=0,j=y-1;i<j;i++,j--)
	{
		t=x[i];
		x[i]=x[j];
		x[j]=t;
	}

}
int main()
{
	int t,g=0,m,r=0;
	int i,len1,len2;
	cin.getline(str1,270);
	cin.getline(str2,270);
	len1=strlen(str1);
	len2=strlen(str2);
	str1[len1]='0';
	str1[len1+1]='\0';
	str2[len2]='0';
	str2[len2+1]='\0';//????????0.
	huanwei(str1,len1);
	huanwei(str2,len2);
	if(len2>len1)//????1??2????
	{
		strcpy(str3,str1);
		strcpy(str1,str2);
		strcpy(str2,str3);
		t=len1;
		len1=len2;
		len2=t;

	}

	for(i=0;i<=len2;i++)
	{
		m=str1[i]+str2[i]+g-96;//????
		if(m>=10)
		{
			m=m%10;
			str1[i]=m+48;
			g=1;
		}
		else
		{
			str1[i]=m+48;
			g=0;
		}
	}

	for(i=len2+1;i<=len1;i++)//?2?????????????
	{
		if(str1[i]+g==58)
		{
			str1[i]=48;
			g=1;
		}
		else  if(str1[i]+g!=58&&g==1)
		{
			str1[i]++;
			g=0;
	}
	}
	for(i=len1;i>=0;i--)
	{
		if(str1[i]==48)//???????0.
			r++;
		else
			break;
	}
	if(r<=len1)
	{
	for(i=len1-r;i>=0;i--)
		cout<<str1[i];

}
	else
		cout <<"0";
	return 0;
}
