int main()
{
	char a[21];
	int n,i,j;
	cin>>n;
	cin.get();
	for(j=0;j<n;j++)
	{
		cin.getline(a,100);
		for(i=0;a[i]!='\0';i++)
		{
			if(i==0)
			{
				if(a[i]<65||(a[i]>90&&a[i]<95)||a[i]==96||a[i]>122)
				{
					cout<<"no"<<endl;
					break;
				}
			}
			else
			{
				if(a[i]<48||(a[i]>57&&a[i]<65)||(a[i]>90&&a[i]<95)||a[i]==96||a[i]>122)
				{
					cout<<"no"<<endl;
					break;
				}
			}
			if(i==strlen(a)-1)
				cout<<"yes"<<endl;
		}
	}
	return 0;
}