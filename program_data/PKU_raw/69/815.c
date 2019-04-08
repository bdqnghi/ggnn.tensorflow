const int maxlen=255;
int main()
{
	char str1[maxlen],str2[maxlen];
	int a1[maxlen],a2[maxlen];
	memset(a1,0,sizeof(a1));
	memset(a2,0,sizeof(a2));
	cin>>str1>>str2;
	for(int i=0;i<strlen(str1);i++)
		a1[i]=str1[strlen(str1)-1-i]-'0';
	for(int i=0;i<strlen(str2);i++)
		a2[i]=str2[strlen(str2)-1-i]-'0';
	int pos=0;
	for(int i=0;i<maxlen-1;i++)
	{
		int temp=a1[i]+a2[i];
		if(temp>=10)
		{
			a1[i]=temp%10;
			a1[i+1]+=1;
		}
		else
			a1[i]=temp;
		if(a1[i]!=0)
			pos=i;
	}
	for(int i=pos;i>=0;i--)
		cout<<a1[i];
	cout<<endl;
	return 0;
}