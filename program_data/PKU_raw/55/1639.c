


int main()
{
	int a,b;
	cin>>a;
	char num[12000];
	cin>>num;
	cin>>b;
	int ln=strlen(num);
	int sum=0;
	for(int i=0;i<ln-1;i++)
	{
		if(num[i]>='0'&&num[i]<='9')
			sum=(sum+(num[i]-'0'))*a;
		if(num[i]>='a'&&num[i]<='z')
			sum=(sum+(num[i]-'a'+10))*a;
		if(num[i]>='A'&&num[i]<='Z')
			sum=(sum+(num[i]-'A'+10))*a;
	}
	if(num[ln-1]>='0'&&num[ln-1]<='9')
		sum+=num[ln-1]-'0';
	if(num[ln-1]>='a'&&num[ln-1]<='z')
		sum+=num[ln-1]-'a'+10;
	if(num[ln-1]>='A'&&num[ln-1]<='Z')
		sum+=num[ln-1]-'A'+10;
	int j=0;
	char output[11000];
	if (sum==0)
		cout<<'0'<<endl;
	else
	{
		while(sum!=0)
		{
			if(sum%b>=0&&sum%b<=9)
				output[j]=sum%b+'0';
			else if(sum%b>=10)
				output[j]=sum%b+'A'-10;
			sum=sum/b;
			j++;
		}
		for(int i=j-1;i>=0;i--)
			cout<<output[i];	
	}
	return 0;
}