int main(){
	int n,i,a[500],b[499],j=0;
	cin>>n;
	for(i=0;i<n;i++)
		{cin>>a[i];
		if(a[i]%2==1) b[j++]=a[i];
		}
	j--;
	for(i=0;i<j-1;i++)
		for(int k=0;k<j-i;k++)
		{
			if(b[k]>b[k+1])
			{
				int temp=b[k];
				b[k]=b[k+1];
				b[k+1]=temp;
			}
		}
	for(i=0;i<j;i++)
		cout<<b[i]<<',';
	cout<<b[i];
}