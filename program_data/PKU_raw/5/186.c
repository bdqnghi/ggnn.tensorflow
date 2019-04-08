int main()
{
	double a;
	cin>>a;
	cin.get();
	char b[501],c[501];
	int i,j;
	cin.getline(b,501);
	cin.getline(c,501);
	int flag=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')
		{
			cout<<"error"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
    for(j=0;c[j]!='\0';j++)
	{
		if(c[j]!='A'&&c[j]!='T'&&c[j]!='C'&&c[j]!='G')
		{
			cout<<"error"<<endl;
			flag=1;
			break;
		}
	}
	}
	if(flag==0)
	{
		if(i!=j)
		{
			cout<<"error"<<endl;
			flag=1;	
		}
	}
	int t=0;
	if(flag==0)
	{
		for(i=0;i<j;i++)
		{
           if(b[i]==c[i])
			   t++;
		}
	double k=(double)t/j;
	if(k>a)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	}
	return 0;
    
}