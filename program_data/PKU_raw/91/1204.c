int main()
{
	char a[101],b[101];
	int i,j;
	cin.getline(a,101);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i+1]=='\0')
			b[i]=a[i]+a[0];
		else
		{
			b[i]=a[i]+a[i+1];
		}
	}
	for(j=0;j<i;j++)
	{
		cout<<b[j];
	}
	return 0;
}