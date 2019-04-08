int main(){
	int n,a[30],b[30];
	char s[1000000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int i=0;i<26;i++){a[i]=0;b[i]=0;}
		for(int i=0;s[i];i++){
			int num=s[i]-'a';
			if(!a[num]){
				b[num]=i+1;
			}
			a[num]++;		
		}
		int ans=-1,ansn=10000000;
		for(int i=0;i<26;i++){
			if(a[i]==1&&b[i]<ansn){
				ans=i;
				ansn=b[i];
			}
		}
		if(a[ans]!=1)cout<<"no"<<endl;
		else cout<<(char)(ans+'a')<<endl;
	}
	//cin>>n;
	return 0;
}


