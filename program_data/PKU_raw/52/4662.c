int main(){ //?????
	int m,n; //??n,m
	cin>>n>>m;
	int a[100],i;
	for(i=0;i<n;i++) //??n??
		cin>>a[i];
	int j,temp;
	for(j=0;j<m;j++)
	{
		temp=*(a+(n-m+j));
		for(i=n-m+j-1;i>=j;i--)
			*(a+(i+1))=*(a+i);
		*(a+j)=temp;
		temp=0;
	} //????m????
	for(i=0;i<n-1;i++)
		cout<<*(a+i)<<" ";
	cout<<*(a+(n-1))<<endl;
	return 0;
} //????
