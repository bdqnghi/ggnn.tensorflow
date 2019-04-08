
int main()
{
	char num1[301]={0},num2[301]={0};
	cin>>num1>>num2;
	int n1=strlen(num1),n2=strlen(num2);

	for(int k=0;k<=(n1-1)/2;k++)
		swap(num1[k],num1[n1-1-k]);
	for(int k=0;k<=(n2-1)/2;k++)
		swap(num2[k],num2[n2-1-k]);
	
	int num[310]={0};

	for(int k=0;k!=301;k++)
	{
		if(num1[k]>='0'&&num1[k]<='9')
			num1[k]-='0';
		if(num2[k]>='0'&&num2[k]<='9')
			num2[k]-='0';
	}

	for(int k=0;k!=301;k++)
	{
		num[k]=num[k]+num1[k]+num2[k];
		if(num[k]>=10)
		{
			num[k]-=10;
			num[k+1]+=1;
		}
	}
	int k;
	for(k=301;k>=0;k--)
	{
		if(num[k]!=0)
			break;
	}
	if(k==-1)
		cout<<'0';
	for(int i=k;i>=0;i--)
		cout<<num[i];
	cout<<endl;
	return 0;
}