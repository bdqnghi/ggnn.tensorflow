

int main(){
	int a[100],*p=NULL;
	int n;
	cin>>n;
	for(p=a;p<n+a;p++)
		cin>>*p;
	for(p=a+n-1;p>a;p--){
		cout<<*p<<" ";
	}
	p=a;
	cout<<*p;
}
