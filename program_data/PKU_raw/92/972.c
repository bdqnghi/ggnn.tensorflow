int n,a[2000],b[2000],ans;

int main() {
	int i,j,k;
	while (cin>>n && n!=0) {
		for (i=0;i<n;i++) cin>>a[i];
		for (i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		ans=-200*n;
		for (j=0;j<n;j++) {
			k=0;
			for(i=0;i<n;i++) {
				if(a[i]>b[(i+j)%n]) k+=200;
				if(a[i]<b[(i+j)%n]) k-=200;
			}
			if(k>ans) ans=k;
		}
		cout<<ans<<endl;
	}
	return 0;
}

