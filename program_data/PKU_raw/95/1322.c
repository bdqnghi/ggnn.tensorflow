//???????????
int main()
{
	char a[80],b[80],i;
	gets(a);
	gets(b);
	for (i=0;i<80;i++)//???????
	{
		if (a[i]>=97)
			a[i]=a[i]-32;
		if (b[i]>=97)
			b[i]=b[i]-32;
	}
	for (i=0;i<80;i++)//????
	{
		if (a[i]=='\0'||b[i]=='\0') 
		{
			cout<<'='<<endl;
			break;
		}
		if (a[i]==b[i])
			continue;
		else 
		{
			if (a[i]>b[i])
			{
				cout<<'>'<<endl;
				break;
			}
			if (a[i]<b[i])
			{
				cout<<'<'<<endl;
				break;
			}
		}
	}
}
