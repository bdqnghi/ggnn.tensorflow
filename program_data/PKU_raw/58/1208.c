
int main()
{
	char string[81];
	int n,i,j,flag;
	cin>>n;
	cin.get();
	for (i=1;i<=n;i++)
	{
		flag=0;
		gets(string);
		char x=string[0];
		if ( (x<65) ||(x>90&&x<95) || (x==96) || (x>122) )
			{ flag=1;}
		for (j=1;string[j]!='\0';j++)
		{
			x=string[j];
			if ( (x<48) || (x>57&&x<65) ||(x>90&&x<95) || (x==96) || (x>122) )
				{ flag=1;break;}
		}
		if (i!=1) cout<<endl;
		if (flag==1) cout<<0;
		else cout<<1;
	}
	return 0;
}