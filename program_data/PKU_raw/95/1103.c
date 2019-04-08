int main()
{
	char a[100],b[100],i,max,t;
	cin.getline(a,100);
	cin.getline(b,100);
	t=0;
	if(strlen(a)>strlen(b))
	{
		max=strlen(a);
	}
	else
	{
		max=strlen(b);
	}
	for(i=0;i<=max-1;i++)
	{
		if(a[i]>=97)
		{
			a[i]=a[i]-32;
		}
		if(b[i]>=97)
		{
			b[i]=b[i]-32;
		}
		if(a[i]==b[i])
		{
			t=t+1;
		}
		else if(a[i]>b[i])
		{
			cout<<">"<<'\n';
		}
		else if(a[i]<b[i])
		{
			cout<<"<"<<'\n';
		}	
	}
	if(t==max)
	{
		cout<<"="<<'\n';
	}
	return 0;
}