int main()
{
	char n[100];
	int a,b;
	cin>>a>>n>>b;
	int num=0;
	int i;
	int len=strlen(n);//???????
	for(i=0;i<len;i++)//??????10??
	{
		if(n[i]<='9' && n[i]>='0')
		{
			n[i]=n[i]-48;
		}
		if(n[i]<='z' && n[i]>='a')
		{
			n[i]=n[i]-87;
		}
		if(n[i]<='Z' && n[i]>='A')
		{
			n[i]=n[i]-55;
		}
		num=num+n[i]*((double)pow((double)a,(double)(len-1-i)));
	}
	if(num==0)
	{
		cout<<0;
	}
	else//???b??????????
	{
		int latter[100];
		i=0;
		do
		{latter[i]=num%b;
		 num=num/b;
		 i++;
		}while(num/b!=0);
		latter[i]=num%b;
		latter[i+1]='\0';
		char n2[100];
		int j;
		for(j=0;i>=0;i--,j++)
		{
			if(latter[i]>=0 && latter[i]<=9)
			{
				n2[j]=latter[i]+48;
			}
			if(latter[i]>=10 && latter[i]<=36)
			{
				n2[j]=latter[i]+55;
			}
			cout<<n2[j];
		}
	}
	cout<<endl;
	return 0;
} 