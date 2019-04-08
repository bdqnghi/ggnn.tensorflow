int main()
{
	int N,a[1000];
	cin>>N;
	int p=0;
	for (int i=0;i<N;i++) cin>>a[i];
	sort (a,a+N);
	for (int i=0;i<N;i++) 
		if ((a[i]%2)==1) {
			if (p==0) {
				cout<<a[i];p=1;
			}else cout<<","<<a[i];
		}
return 0;
}