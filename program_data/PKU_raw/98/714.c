int main()
{
	int words=0,count=0;
	char str1[100],str2[100];
	int length1=0,length2=0,length3=0;
	cin>>words;
	gets(str1); 
	cin>>str1;
	count=1;
	cout<<str1;
	length1=strlen(str1);
	while (count<words)
	{
		cin>>str2;
		length2=strlen(str2);
		length1=length1+length2+1;
		if (length1<=80)
			cout<<" "<<str2;
		else
		{
			cout<<endl;
			cout<<str2;
			strcpy(str1,str2);
			length1=strlen(str1);
		}
		count++;
	}
	return 0;
}