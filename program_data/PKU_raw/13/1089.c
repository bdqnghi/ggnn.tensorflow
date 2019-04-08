int main()
{
	int k,i,j,n,t=0,b,p;
	int a[20000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(j=0;j<n-t;j++)
		{for(k=j+1;k<n-t;){
			if(a[k]==a[j]){
				for(p=k;p<n-t;p++)
			   a[p]=a[p+1];
			   t++;
			}
			else k++;
		}
	}
	for(b=0;b<n-1-t;b++)
		cout<<a[b]<<" ";
	cout<<a[n-1-t]<<endl;
	return 0;
}
