
int main()
{
	char str1[80],str2[80];
	int i;
	cin.getline(str1,80);
	cin.getline(str2,80);
	for(i=0;str1[i]!='\0';i++)
		if(str1[i]>=65&&str1[i]<=90)
			str1[i]=str1[i]+32;
	for(i=0;str2[i]!='\0';i++)
		if(str2[i]>=65&&str2[i]<=90)
			str2[i]=str2[i]+32;
	for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
	{
		if(str1[i]>str2[i])
		{
			cout<<">"<<endl;
			goto lable;
		}
		if(str1[i]<str2[i])
		{
			cout<<"<"<<endl;
			goto lable;
		}
	}
	cout<<"="<<endl;
lable:	return 0;
}