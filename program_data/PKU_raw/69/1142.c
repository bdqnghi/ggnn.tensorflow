void xiaoling(char str[])
{
	int len=strlen(str);
	if(str[0]=='0')
	{
		int i;
		for(i=0;str[i]=='0';i++)
		{
		}
		int j;
		for(j=i;j<=len+1;j++)
		{
			str[j-i]=str[j];
		}
	}
}
int main()
{ 
	char str1[10000]={' '},str2[10000]={' '};
	int len1,len2,len,a[10000]={0},b[10000]={0};
	cin>>str1;
	cin>>str2;
	if(str1[0]=='0'&&str1[1]=='\0'&&str2[0]=='0'&&str2[1]=='\0')
	{
		cout<<0;
		return 0;
	}
	xiaoling(str1);
	xiaoling(str2);
	len1=strlen(str1);  //????len1-1
	len2=strlen(str2);
	int i,j=0;
	for(i=len1-1;i>=0;i--)
	{
		a[j]=str1[i]-'0';
		j++;
	}
	j=0;
	for(i=len2-1;i>=0;i--)
	{
		b[j]=str2[i]-'0';
		j++;
	}
	if(len1>len2)
		len=len1;
	else
		len=len2;
	for(i=0;i<len;i++)
	{
		a[i]=a[i]+b[i];
		if(a[i]>=10)
		{
			a[i]-=10;
			a[i+1]++;
		}
	}
	for(i=len;i>=0;i--)
	{
		if(a[i]!=0)
			break;
	}
	for(j=i;j>=0;j--)
		cout<<a[j];


	return 0;

}