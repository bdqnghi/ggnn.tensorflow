int main()
{
	char a[80],b[80];
	int i;
	gets(a);
	gets(b);
	for(i=0;i<=79;i++)
	{
		if(a[i]>90)
			a[i]=a[i]-32;
		if(b[i]>90)
			b[i]=b[i]-32;
		if(a[i]==b[i])
		{
			if(a[i]=='\0')
			{cout<<"=";break;}
			else continue;
		}
		else if(a[i]>b[i])
		{

cout<<">";break;
		}
		else
		{

	cout<<"<";break;
		}
	
	}
	return 0;
}
		
