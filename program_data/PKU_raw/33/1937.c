int main(){
    int n,i,j;
	cin>>n;
	char a[n][1000],b[n][1000];
	for(i=0;i<n;i++){
		cin>>a[i];
		for(j=0;a[i][j]!='\0';j++){
            if(a[i][j]=='A')b[i][j]='T';
            if(a[i][j]=='T')b[i][j]='A';
			if(a[i][j]=='G')b[i][j]='C';
			if(a[i][j]=='C')b[i][j]='G';
		}
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<endl;
	}
	return 0;
}