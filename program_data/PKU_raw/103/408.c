int main()
{
	char a[1000]={'\0'};
	cin>>a;
	int i=0;
	while (a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
		i++;
	}
	i=1;
	int times=1;
	while (a[i]!='\0')
	{
		if (a[i]==a[i-1])
		times++;
		else 
		{
			cout<<'('<<a[i-1]<<','<<times<<')';
			times=1;
		}
		i++;
	}
	cout<<'('<<a[i-1]<<','<<times<<')';
	return 0;
}