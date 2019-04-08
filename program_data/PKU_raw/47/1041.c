int main()
{int i=0,n=0;int a[100]={0};int b[100]={0};
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];
for(i=0;i<n;i++)
	b[i]=a[n-i-1];
for(i=0;i<n;i++)
	if(i<n-1)cout<<b[i]<<" ";
	else cout<<b[i]<<endl;
cin.get();cin.get();
return 0;
}
