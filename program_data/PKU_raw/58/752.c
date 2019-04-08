int num(char a[100])
{
	int times=0,i;
	for(i=0;a[i]!='\0';i++)
		times++;
	return (times);
}
int main()
{
	int n,i,yn[100],j,times[100];
	cin>>n;
	for(i=0;i<100;i++)
		yn[i]=0;
	char a[100][80];
	cin.get();
	for(i=0;i<n;i++)
    {
		cin.getline(a[i],100,'\n');
		times[i]=num(a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i][0]=='_'||(a[i][0]>=97&&a[i][0]<=122)||(a[i][0]>=65&&a[i][0]<=90))
		{
			for(j=1;j<times[i];j++)
				if(a[i][j]=='_'||(a[i][j]>=97&&a[i][j]<=122)||(a[i][j]>=65&&a[i][j]<=90)||(a[i][j]>=48&&a[i][j]<=57))
					yn[i]++;
			if(yn[i]==times[i]-1)
				yn[i]=1;
			else yn[i]=0;
		}
	}
	for(i=0;i<n;i++)
		cout<<yn[i]<<endl;
	return 0;
}