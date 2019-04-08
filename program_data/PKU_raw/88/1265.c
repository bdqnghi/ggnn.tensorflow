int detc(char m)
{
	if(m>=48&&m<=57)return 1;
	else return 0;
}
int main()
{
	char c[30];
	int i,j,k;
	int m,n;
	cin.getline(c,31,'\n');
    n=strlen(c);
	for(i=0;i<=n-1;i++)
	{
		if((i==0&&detc(c[i])==1)||i!=0&&detc(c[i])&&!detc(c[i-1]))
		{
			for(j=0;detc(c[i+j])==1;j++)
			{cout<<c[i+j];}
			cout<<endl<<endl;
		}
	}
	return 0;
}
