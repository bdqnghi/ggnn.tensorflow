int main(){
	int n;
	cin>>n;
	if(n==0){
		cout<<1<<endl;return 0;
	}
	n--;
	static int a[1000],b[1000];
	for(int i=0;i<1000;i++)a[i]=0;
	a[0]=1;a[1]=2;
	while(n){
		n--;
		for(int i=0;i<1000;i++)b[i]=0;
		b[0]=a[0];
		for(int i=1;i<=a[0];i++){
			b[i]+=a[i]*2;
			b[i+1]+=b[i]/10;
			b[i]%=10;
		}
		if(b[a[0]+1]>0)b[0]++;
		for(int i=0;i<1000;i++)a[i]=b[i];
	}
	for(int i=a[0];i>=1;i--){
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}