int main()
{
	int i,j,len,num[2000]={0},k;
	char str[2000]={0},ch;
	cin.getline(str,1003);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z') str[i]-=32;
	}
	for(i=0;i<len;i++)
	{
		ch=str[i];
		for(j=1;j<len-i&&str[i+j]==ch;j++);
		num[i]=j;
		i=i+j-1;
	}
	for(i=0;i<len;i++)
	{
		if(num[i]!=0) cout<<'('<<str[i]<<','<<num[i]<<')';
	}
	return 0;
}