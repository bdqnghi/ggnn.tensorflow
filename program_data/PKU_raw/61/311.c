int main()
{
	int n,i,c,d,e;
	cin >>n;
	const int N=n;
	int a[N];
	for(i=0;i<=N-1;i=i+1){
		cin>>a[i];
	}
	for(i=0;i<=N-1;i=i+1){
	  for(e=1,c=1,d=1;e<=a[i]-2;e=e+2){
		  c=c+d;
		  d=c+d;
	 }
	  if(a[i]%2==1){
	  		 cout<<c<<'\n'<<endl;
			}
	  else {
		  cout<<d<<'\n'<<endl;
	  }
	}
	return 0;

}