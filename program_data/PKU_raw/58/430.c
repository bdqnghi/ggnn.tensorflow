int main(){
	int n;
	int j,k,l;
	cin>>n;cin.get();
	int i=0;
	for(i=0;i<n;i++){
		k=0;
		char a[100];
		cin.getline(a,100);
		l=strlen(a);
		if(!((a[0]=='_')||(a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A'))){
			cout<<0<<endl;continue;
		}
		if(l==1&&((a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A')||a[0]=='_')){
			cout<<1<<endl;continue;
		}
		for(j=1;j<l;j++){
			if(!((a[j]=='_')||(a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A')||(a[j]>='0'&&a[j]<='9'))){
				cout<<0<<endl;break;}
			else {
				k++;
			}
		}
		if(k==l-1)
			cout<<1<<endl;
	}
}