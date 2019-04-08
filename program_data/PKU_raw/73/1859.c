int main(){
	int i,j,m,n,p=1;
	int a[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++){
		for(m=0,j=1;j<5;j++)
			if(a[i][m]<a[i][j])m=j;
		for(n=0,j=1;j<5;j++)
			if(a[n][m]>a[j][m])n=j;
		if(n==i){cout<<n+1<<' '<<m+1<<' '<<a[n][m];
		p=0;}}
		if(p==1)cout<<"not found"<<endl;
	return 0;
}