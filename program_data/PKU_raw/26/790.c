
int main()
{
	char a[105];
	cin.get(a,105,'\n');

	int len=strlen(a);
	int i=0;
	for(;i<101;i++)
	{
		int j;
		if(a[i]==' ' && a[i+1]==' ')
		{
			for(j=i+1;j<=len;j++)
				a[j]=a[j+1];
			len--;
			i--;
		};	
	}
	cout<<a<<endl;
	return 0;
}