int main(){
	char a[100],b[100];
	for(int k=0;k<100;k++){
		a[k]='{';
		b[k]='{';
	}
	int a1[100]={0},b1[100]={0};
	cin>>a>>b;
	a[strlen(a)]='{';
	b[strlen(b)]='{';
	for(int i=0;i<100;i++){
	   a1[a[i]-'A']++;
	   b1[b[i]-'A']++;
	}
	for(int j=0;j<100;j++){
		if(a1[j]!=b1[j]){
			cout<<"NO"<<endl;
            return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}