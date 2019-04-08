int main()
{
	int n;//?????
	int times;//???times???
	int p[200][200];
	int hang,lie;//??????????
	int sum=0;//????????????
	int i,j;//????
	cin>>n;
	for(times=0;times<n;times++)
	{
		cin>>hang>>lie;
		for(i=0;i<hang;i++)
			for(j=0;j<lie;j++)
				cin>>*(*(p+i)+j);
		for(i=0;i<hang;i=i+hang-1)
			for(j=0;j<lie;j++)
				sum=sum+*(*(p+i)+j);
		for(i=0;i<hang;i++)
			for(j=0;j<lie;j=j+lie-1)
				sum=sum+*(*(p+i)+j);
		sum=sum-*(*p)-*(*p+lie-1)-*(*(p+hang-1))-*(*(p+hang-1)+lie-1);
		cout<<sum<<endl;
sum=0;
	}
	return 0;
}

