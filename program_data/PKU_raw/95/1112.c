
int main()
{
	char str1[81],str2[81];
	int i;
	cin.getline(str1,81);
	cin.getline(str2,81);
	for(i=0;i<strlen(str1);i++)
	{
	   if(str1[i]>=65&&str1[i]<=90)
		   str1[i]=str1[i]+32;
	}
	for(i=0;i<strlen(str2);i++)
	{
		if(str2[i]>=65&&str2[i]<=90)
			str2[i]=str2[i]+32;
	}
	if(strcmp(str1,str2)==0)
		cout<<"="<<endl;
	if(strcmp(str1,str2)==1)
		cout<<">"<<endl;
	if(strcmp(str1,str2)==-1)
		cout<<"<"<<endl;
	return 0;
}

