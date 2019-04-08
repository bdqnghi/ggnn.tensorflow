int main()
{
	char a[40],b[40];
	int length;
	int i,j,x;
	cin>>a>>b;
	if(strlen(a) != strlen(b))
		cout<<"NO"<<endl;
	else
	{
		length=strlen(a);
		x=length;
		for(i=0;i<length;i++)
		{
			for(j=0;j<length;j++)
			{
				if(a[i]==b[j])
				{
					b[j]='\0';
					x--;
					break;
				}
			}
		}
		if(x==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
