

int main()
{
	char str[1001],str2[1001];
	int i,num[1000],j=0;
	cin>>str;
	for(i=0;i<1000;i++)
		num[i]=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97&&str[i]<=122)
			str[i]=str[i]-32;
	}
	str2[0]=str[0];
	for(i=1;str[i]!='\0';i++)
	{
		if(str[i]==str2[j])
			num[j]++;
		else
		{	
			str2[j+1]=str[i];
			j++;
		}
	}
	for(i=0;i<j+1;i++)
	{
		cout<<"("<<str2[i]<<","<<num[i]<<")";
	}
	cout<<endl;
	return 0;
}