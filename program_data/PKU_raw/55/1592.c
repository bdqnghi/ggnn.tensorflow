int main()
{
	int a,b,i,j=0;
	char str[100001];
	long sum=0;
	cin>>a>>str>>b;
	for(i=0;i<100001&&str[i]!=0;i++)
	{
		if(str[i]>='0'&&str[i]<='9')str[i]-='0';
		else if(str[i]>='a'&&str[i]<='z')str[i]=str[i]-'a'+10;
		else if(str[i]>='A'&&str[i]<='Z')str[i]=str[i]-'A'+10;
		sum*=a;
		sum+=str[i];
	}
	int save[100000]={0};
	while(sum!=0)
	{
		save[j++]=sum%b;
		sum/=b;
	}
	char temp;
	for(i=j-1;i>=0;i--)
	{
		if(save[i]<10)temp=save[i]+'0';
		else temp=save[i]-10+'A';
		cout<<temp;
	}
if(j==0)cout<<0<<endl; 
	return 0;
}
