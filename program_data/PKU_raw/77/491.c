int main(){
	char a[100];
	cin>>a;
	for(int i=0;i<strlen(a)-1;i++){
		if(a[i]==' ')continue;
		else if(a[i+1]==' '){
			int j;
			for(j=1;a[i+j]==' ';j++){}
			if(a[i]!=a[i+j]){
				cout<<i<<' '<<i+j<<endl;
				a[i]=' ';
				a[i+j]=' ';
				i=0;
			}
		}
		else if(a[i]!=a[i+1]){
			cout<<i<<' '<<i+1<<endl;
			a[i]=' ';
			a[i+1]=' ';
			i=0;
		}
	}
	cout<<0<<' '<<strlen(a)-1<<endl;
	return 0;
}