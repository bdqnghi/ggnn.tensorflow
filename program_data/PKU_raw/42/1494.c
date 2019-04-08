

int main(){
	int n,k,l;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>k;
	l=n;
	for(int i=0;i<l;){
		if(a[i]==k){
			for(int j=i;j<l-1;j++) a[j]=a[j+1];
			l--;
		}
		else i++;
	}
	for(int i=0;i<l;i++){
		cout<<a[i];
		if(i!=l-1) cout<<' ';
	}
	return 0;
}