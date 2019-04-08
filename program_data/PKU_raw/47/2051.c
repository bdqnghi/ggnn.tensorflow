void run(int *p,int n){
	if(n!=1) cout<<*p<<" ";
	else{
		cout<<*p;
		return;
		}
	run(p-1,n-1);
	return;
	}
int main(){
	int a[110],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
	//?????????? 
	run(a+n-1,n);
	return 0;
	}
