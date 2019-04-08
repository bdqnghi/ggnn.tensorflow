
int main()
{ 
	char a1[1000],b1[1000];
	int a[1000]={0},b[1000]={0};
	cin.getline(a1,1000);
	cin.getline(b1,1000);
	for (int i=0;i<strlen(a1);i++)
	{
		a[i]=(int)a1[strlen(a1)-i-1]-48;
	}
	for (int i=0;i<strlen(b1);i++)
	{
		b[i]=(int)b1[strlen(b1)-i-1]-48;
	}
	for (int i=0;i<1000;i++)
	{
		if (a[i]+b[i]<10)
		{a[i]+=b[i];}
		else
		{a[i+1]+=(a[i]+b[i])/10;a[i]=(a[i]+b[i])%10;}
	}
	int t=-1;
	for (int i=999;i>=0;i--)
	{
		if (a[i]==0)
		{continue;}
		else
		{t=i;break;}
	}
	if (t==-1)
	{cout<<0<<endl;}
	else
	{
	for (int i=t;i>=0;i--)
		{
			cout<<a[i];
		}	
	cout<<endl;
	}


	return 0;
}