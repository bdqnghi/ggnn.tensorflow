int main()
{
	char in[510],a[255][5];
	int n=0,num[255];
	cin>>n;
	cin.get();
	cin.getline(in,510);
	int len=strlen(in),k=0,i=0,j=0;
	for(i=0;i<len;i++)
		num[i]=1;
	for(i=0;i<=len-n;i++)
	{
		strncpy(a[k],in+i,n);
		a[k][n]='\0';
		k++;
	}

//for(i=0;i<k;i++)
//	cout<<a[i]<<endl;

	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if( strcmp(a[i],a[j]) ==0 )
			{
				num[j]=0;
				if(num[i])
					num[i]++;
			}	
		}
	}


//for(i=0;i<k;i++)
//		cout<<num[i]<<endl;

	int max=0;
	for(i=0;i<k;i++)
	{
		if(num[i]>max)
			max=num[i];
	}
	
	if(max==1)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<max<<endl;
	for(i=0;i<k;i++)
	{
		if(num[i]==max)
			cout<<a[i]<<endl;
	}
	return 0;

}