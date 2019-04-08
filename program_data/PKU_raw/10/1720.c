int main()
{
	int a[30],count=0,n,temp,i;
	cin>>n;
	while(n--)
	{
		cin>>temp;
		for(i=0;i<count;i++)if(temp>a[i]){a[i]=temp;break;}
		if(i>=count){a[i]=temp;count++;}
	}
	cout<<count<<endl;
	return 0;
}