int main(){
	int n,i,k,t;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		for(k=i+1;k<n;k++)
		 while ((a[k]==a[i])&&(k<n)) //?a?i???????????
		  {for(t=k;t<n-1;t++)        //???????
		  a[t]=a[t+1];
		  n--;}
	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-1];
	return 0;

}
