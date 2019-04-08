int main()
{
	int a[20001]={0};
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[j]==a[i])
			{	for(k=j;k<n-1;k++)
					 a[k]=a[k+1];
			j=j-1;
			n=n-1;
			}


    for(i=0;i<n-1;i++)
	      cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;

return 0;
}
