int main(){
	char s[600];
	int n;
	char ans[100][10];
	int acnt=0;
	int mx=0;
	cin>>n;
	cin>>s;
	for(int i=0;s[i+n]!='\0';i++){
		int cnt=1;
		for(int j=i+1;s[j+n-1]!='\0';j++){
			int k;
			for(k=0;k<n;k++){
				if(s[i+k]!=s[j+k])break;
			}
			if(k==n)cnt++;
		}
		if(cnt>mx){
			mx=cnt;
			acnt=1;
			for(int j=0;j<n;j++)ans[acnt][j]=s[i+j];
			ans[acnt][n]='\0';
		}
		else if(cnt==mx){
			acnt++;
			for(int j=0;j<n;j++)ans[acnt][j]=s[i+j];
			ans[acnt][n]='\0';
		}
	}
	if(mx!=1){
		cout<<mx<<endl;
		for(int i=1;i<=acnt;i++){
			cout<<ans[i]<<endl;
		}
	}
	else{
		cout<<"NO";
	}
	
}
