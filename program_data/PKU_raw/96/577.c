int main()
{
	char str[110];
	int a[110];
	int i=0,j=0,k=0,len=0;
	cin.getline(str,110);
	len=strlen(str);
	if(len==1)  //??????
	{
		cout<<"0"<<endl;
		cout<<str<<endl;
	}
	else
	{
		for(i=0;str[i]!='\0';i++)
			a[i]=str[i]-'0'; //???????????????	
		k=a[0]*10+a[1];
		a[1]=k%13;  //?????????????
		if(k>13)  
		{
			cout<<k/13;
		}
		else if(len==2)
		{
			cout<<"0";
		}
		for(i=1;i<len-1;i++) //???>2?????????
		{
			k=a[i]*10+a[i+1];
			a[i+1]=k%13;
			cout<<k/13;
		}
		cout<<endl<<a[i]<<endl;
	}
	return 0;
}
