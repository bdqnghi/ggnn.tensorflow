int main()
{
	char a[100];
	int x,i,j,k,l=0;
	cin>>x;
	cin.get();
	for(i=0;i<x;i++)
	{
		k=0;
		cin.getline(a,100,'\n');
		if(a[0]>='0'&&a[0]<='9')
			k++;
		for(j=0;j<strlen(a);j++)
		{
			if((a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||(a[j]>='0'&&a[j]<='9')||(a[j]=='_'))
				l++;
			else
				k++;
		}
		if(k>0)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
	return 0;
}