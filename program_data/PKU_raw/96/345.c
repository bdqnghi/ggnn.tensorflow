int main()
{
	char a[100];
	int i, j, r=0, z1, len, b[100]={1};
	cin.getline(a,100);
	len=strlen(a);
	
	if(len==1)
	{
		cout << "0" << endl;
		cout << a[0]-'0' <<endl;
	}
	if(len==2)
	{
		cout<<((a[0]-'0')*10+(a[1]-'0'))/13<<endl;
		cout<<((a[0]-'0')*10+(a[1]-'0'))%13<<endl;
		
	}
	if(len>=3)
	{
		r=a[0]-'0';
	for(i=1; a[i]!=0; i++ )
	{
		z1=r*10+(a[i]-'0');
		b[i-1]=z1/13;
		r=z1%13;
	}

	if(b[0]==0)
	{
		for(j=1; j<i-1; j++ )		cout<<b[j];
	}
	else
	{
		for(j=0; j<i-1; j++ )		cout<<b[j];
	}
		cout<<"\n"<<r;
	}
	return 0;
	}
		
	
		