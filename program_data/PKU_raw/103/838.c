int main()
{
	char a[1100]={'\0'};
	cin>>a;
	char b=a[0];
	int i=0,count=0;
	while (1)
	{
		if (a[i]==b||a[i]==b-32||a[i]==b+32)
		{
			count++;
			i++;
		}
		else if (a[i]!=b&&a[i]!=b-32&&a[i]!=b+32)
		{
			if (a[i-1]<97)
			{
				char c=a[i-1];
				cout<<"("<<c<<","<<count<<")";
			}
			else if (a[i-1]>=97)
			{
				char d=a[i-1]-32;
				cout<<"("<<d<<","<<count<<")";
			}
			count=0;
			b=a[i];
		}
		if (a[i]=='\0')
		{
			if (a[i-1]<97)
			{
				char e=a[i-1];
				cout<<"("<<e<<","<<count<<")";
			}
			else if (a[i-1]>=97)
			{
				char f=a[i-1]-32;
				cout<<"("<<f<<","<<count<<")";
			}
			break;
		}
	}
}
