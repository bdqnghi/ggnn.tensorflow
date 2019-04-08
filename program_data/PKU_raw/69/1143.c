
int main()
{
	char a[252],b[252];

	cin>>a>>b;
	int la=strlen(a);
	int lb=strlen(b);

	int flag=0;

	if(la<lb) 
	{
		int i=0,x;
		char temp[252];
		for(i=0 ;a[i]!='\0'; i++) temp[i]=a[i];temp[i]='\0';
		
		for(i=0 ;b[i]!='\0'; i++) {a[i]=b[i];}a[i]='\0';
		for(i=0 ;temp[i]!='\0'; i++) {b[i]=temp[i];}b[i]='\0';
		x=la;
		la=lb;
		lb=x;
	}//la>=lb

	int j,k=la-1;
	for(j=lb-1; j>=0 ;j--)
	{
		a[k]=a[k]+b[j]-48;
		if(a[k]>'9' && k!=0)
		{
			a[k]=a[k]-10;
			a[k-1]++;
		}
		if(a[k]>'9' && k==0 )
		{
			a[k]=a[k]-10;
			flag=1;
		}
		k--;
	}
	for(int i=la-1;i>=0;i--)
	{
		if(a[i]>'9' && i!=0) 
		{
			a[i]=a[i]-10;
			a[i-1]++;
		}
		if(a[i]>'9' && i==0 )
		{
			a[i]=a[i]-10;
			flag=1;
		}
	}
	int i=0;
	if(flag==1) cout<<1;
	if(flag==0)
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]!='0')
				break;
		}
	}

	cout<<a+i;

	if(atoi(a)==0 && atoi(b)==0) cout<<0;



	return 0;
}

