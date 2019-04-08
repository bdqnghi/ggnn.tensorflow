//??????
int main()
{
	int n;
	char str[510]={'\0'};
	cin>>n;
	cin>>str;
	int len=strlen(str);
	char *p=str;
	char substr[6]={'\0'};
	substr[n]='\0';
	int fre[510]={0};
	int maxfre=0;
	for(int i=0;i<=len-n;i++)
	{
		strncpy(substr,p+i,n);
		for(int j=i;j<=len-n;j++)
			if(!strncmp(substr,p+j,n))
				fre[i]++;
		if(fre[i]>maxfre)
			maxfre=fre[i];
	}
	if(maxfre==1)
		cout<<"NO"<<endl;
	else
	{
		cout<<maxfre<<endl;
		for(int i=0;i<=len-n;i++)
			if(fre[i]==maxfre)
			{
				for(int j=i;j<i+n;j++)
					cout<<str[j];
				cout<<endl;
			}
	}
	return 0;
}
