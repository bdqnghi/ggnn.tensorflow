int main(){
	int n,i,j,m,k,p,q;
	p=0;
	q=0;
	char a[102][102];
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]=='@')
				p++;
			if(a[i][j]=='#')
				q++;
		}
	cin>>m;
	for(i=0;i<=n+1;i++)
		for(j=0;j<=n+1;j++)
			if(i==0||j==0||i==n+1||j==n+1)
				a[i][j]='#';
	for(k=0;k<m-1;k++){
	    for(i=1;i<=n;i++)
		    for(j=1;j<=n;j++)
			    if((a[i][j]=='.')&&((a[i-1][j]=='@')||(a[i+1][j]=='@')||(a[i][j-1]=='@')||(a[i][j+1]=='@'))){
			    	a[i][j]='*';
			    	p++;
			    }
	    for(i=1;i<=n;i++)
	    	for(j=1;j<=n;j++)
	    		if(a[i][j]=='*')
	    			a[i][j]='@';
	}
	cout<<p<<endl;
	return 0;
}