
int main()
{
	char a[100],b[100];
	cin.getline(a,100);

	cin.getline(b,100);
	for(int i=0;a[i]!='\0';++i)
	{
		if(a[i]>='A'&&a[i]<='Z')
			a[i]+=32;
	}
	for(int i=0;a[i]!='\0';++i)
	{
		if(b[i]>='A'&&b[i]<='Z')
			b[i]+=32;
	}
	for(int i=0;i<100;++i)
	{
		if(a[i]!='\0'&&b[i]!='\0'&&(a[i]==b[i]))
			continue;
		else if(a[i]=='\0'||b[i]=='\0')
			{
				if(a[i]==b[i])
				{cout<<"=";break;}
			else 
			{cout<<(a[i]>b[i]?">":"<");break;}
		    }
		else
			{
				cout<<(a[i]>b[i]?">":"<");
				break;
		}
	}
	return 0;
}
