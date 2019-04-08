

int main(){
	int n,flag=0;
	cin>>n;
	cin.get();
	char a[30];
	for(int i=1;i<=n;i++){
		cin.getline(a,30);
		if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')){
			for(int j=1;a[j]!='\0';j++){
				if(a[j]=='_'||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9'))
					continue;
				else{
					cout<<"no"<<endl;
					flag++;
					break;
				}
			}
			if(flag==0)
				cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
		flag=0;
	}
	return 0;
}