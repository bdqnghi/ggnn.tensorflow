/*
 * 1000012786_30_1.cpp
 *
 *  Created on: 2010-11-8
 *      Author: ??
 */
int main(){
	char a[81],b[81];                    //???????
	cin.getline(a,81);                   //?????
	int i;
	for(i=0;i<81;i++)
	{
		if((a[i]<=122)&&(a[i]>=97))
		{
			a[i]=a[i]-32;
		}
		else continue;
	}                                    //????????
	cin.getline(b,81);                   //?????
	for(i=0;i<81;i++)
	{
		if((b[i]<=122)&&(b[i]>=97))
		{
			b[i]=b[i]-32;
		}
		else continue;
	}                                    //????????
	i=0;
	for(i=0;i<81;i++)
	{
		if((a[i]=='\0')||(b[i]=='\0'))
		{
			if(a[i]==b[i])
			{
				cout<<"=";
				break;
			}
			if((a[i]=='\0')&&(b[i]!='\0'))
			{
				cout<<"<";
				break;
			}
			if((b[i]=='\0')&&(a[i]!='\0'))
			{
				cout<<">";
				break;
			}
		}
		else if(a[i]>b[i])
		{
			cout<<">";
			break;
		}
		else if(a[i]<b[i])
		{
			cout<<"<";
			break;
		}
		else if(a[i]==b[i])
		{
			continue;
		}
	}                                    //??????????
	if(i==81)
	{
		cout<<"=";
	}                                    //??????=
	return 0;
}
