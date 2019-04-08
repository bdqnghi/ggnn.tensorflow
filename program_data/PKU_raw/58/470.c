int main()                 //???
{
	int n=0,i=0,count=0,l=0;
	char a[800];
	cin>>n;
	cin.getline(a,800);         //???????????
	for(;n>0;n--)                   //?????
	{
		count=0;                  //?????
		cin.getline(a,800);
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='_'||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9'))
				count+=1;
		}
		if((a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))&&count==l)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;                       //???????????
	}
	return 0;             //??
}
