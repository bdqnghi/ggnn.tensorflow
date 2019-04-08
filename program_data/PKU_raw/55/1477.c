
int main()
{
	int a,b,number=0;
	char num[100];
	cin>>a>>num>>b;

	if(num[0]=='0') 
	{
		cout<<0;
		return 0;
	}
	for(int i=0; num[i]!='\0'; i++)
		if(num[i]>='A' && num[i]<='Z') num[i]=num[i]+32;
	
	for(int i=0; num[i]!='\0'; i++)
	{
		if(num[i]>='0' && num[i]<='9')
			num[i]=num[i]-48;
		else num[i]=num[i]-97+10;
		
		number=number*a+num[i];
	}

	char na[100];
	int i;
	for( i=0; number!=0; i++)
	{
		na[i]=number%b;
		if(na[i]>9) na[i]=na[i]+55 ;
		else na[i]=na[i]+48;
		number=number/b;
	}
	for(int j=i-1; j>=0; j--) cout<<na[j];

	
	return 0;
}
