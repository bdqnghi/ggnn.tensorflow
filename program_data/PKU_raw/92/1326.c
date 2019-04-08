int a[1000],b[1000];

int main()
{
	//freopen("in.txt","r",stdin);
	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		sort(b,b+n);
		int re=0;
		int a1=0,a2=n-1;
		int b1=0,b2=n-1;
		int pa,pb;
		for(int i=0;i<n;i++){
			if(b[b1]>a[a1]){
				pa=a1++;
				pb=b1++;
			}else if(b[b2]>a[a2]){
				pa=a2--;
				pb=b2--;
			}else{
				pa=a2--;
				pb=b1++;
			}
			if(b[pb]>a[pa]){
				re++;
			}else if(b[pb]<a[pa]){
				re--;
			}
		}
		cout<<re*200<<endl;
	}

	return 1;
}
