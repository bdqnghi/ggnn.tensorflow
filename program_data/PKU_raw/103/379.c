int main()
{
	int i, j=0, len=0, count[1000]={0};
	char str[1000], copy[1000]={'a'};
	cin.getline(str,10001,'\n');
	len=strlen(str);
	for(i=0;i<len;i++)
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]+'A'-'a';
	for(i=0;i<len;i++)
	{
		if(i==0)
		{
			copy[j]=str[i];
			count[j]=1;
		}
		if(str[i]==str[i-1]&&i!=0)
			count[j]++;
		if(str[i]!=str[i+1])
		{
			copy[++j]=str[i+1];
			count[j]=1;
		}
	}
	for(i=0;i<j;i++)
		cout<<'('<<copy[i]<<','<<count[i]<<')';
	cout<<endl;
	return 0;
}