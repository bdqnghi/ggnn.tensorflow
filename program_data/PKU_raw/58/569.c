int main(){
	int n,i,j,l,t;
	char a[81];
	cin>>n;
	cin.getline(a,81);
	for(i=1;i<=n;i++){
		cin.getline(a,81);
		l=strlen(a);
		if(a[0]=='_'||(a[0]>='A'&&a[0]<='Z')||(a[0]>='a'&&a[0]<='z')){
			t=1;
			for(j=1;j<l;j++){
				if(a[j]=='_'||(a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||(a[j]>='0'&&a[j]<='9'))
					t=1;
				else {
					t=0;
					break;
				}
			}
		}
		else t=0;
		cout<<t<<endl;
	}
	return 0;
}