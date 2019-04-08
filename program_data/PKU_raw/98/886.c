int main()
{
	char a[100000];
	int n=0,j=0,i=0,sum=0,j1=0,j2=0;
	cin>>n;
	//cout<<n;
	cin.get();
	cin.getline(a,100000);
	//cout<<'f';
	while(a[i]!='\0')
	{i++;
		sum++;}
	while(sum-j>80)
	{j1=j;
	j=j+80;
	j2=j;
	
	
		while(a[j]!=' ')
			j--;
		if(j==j2)
			for(i=j1;i<j;i++)
				if(i==j-1)
					cout<<a[i]<<endl;
				else
				cout<<a[i];
		else
		for(i=j1;i<j;i++)
			if(i==j-1)
				cout<<a[i]<<endl<<endl;
			else
				cout<<a[i];
		j=j+1;
	}
	for(i=j;i<sum;i++)
		if(i==sum-1)
			cout<<a[i];
		else
		cout<<a[i];
	return 0;
}
