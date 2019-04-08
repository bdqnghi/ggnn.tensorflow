int main()
{
	int i=0;
	int n=0;
	char a[100]={0};
	cin.getline(a,100,'\n');
	for(i=0;i<100;i++)
	{
		while(a[i]==' '&&a[i+1]==' ')
		{
			n=i;
			for(n=i;n<99;n++)
			{
				a[n]=a[n+1];
				a[99]=0;
			}
		}
	}
	cout<<a<<endl;
	return 0;
}
