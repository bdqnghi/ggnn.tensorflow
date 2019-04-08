int main(){
	int n,m,temp;
	cin>>n>>m;
	int a[101];
	int *p=a;
	for(p=a;p<a+n;p++)
		cin>>*p;
	for(int i=0;i<m;i++){
		p=a+n-1;
		temp=*p;
		for(p--;p>=a;p--)
			*(p+1)=*p;
		p++;
		*p=temp;
	}
	for(p=a;p<a+n;p++){
		if(p==a) cout<<*p;
		else cout<<' '<<*p;
	}
	return 0;
}