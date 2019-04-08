int main(){ 
	int n,m;
	int a[103][103];
	int i,j,count=0;
	char c[103];
	scanf("%d",&n);
	for(i=0;i<n+2;i++){
		a[0][i]=-1;
		a[n+1][i]=-1;
		a[i][0]=-1;
		a[i][n+1]=-1;
	}

	for(i=1;i<=n;i++){
		scanf("%s",c);
		for(j=0;j<n;j++){
			if(c[j]=='.')
				a[i][j+1]=0;
			else if(c[j]=='#')
				a[i][j+1]=-1;
			else if(c[j]=='@'){
				a[i][j+1]=1;
				count++;
			}
		}
	
	}
	scanf("%d",&m);
	int k=2;
	for(k=2;k<=m;k++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(a[i][j]==0)
					if(a[i+1][j]>=1 || a[i][j+1]>=1){
						a[i][j]=k;
						count++;
					}
					else if(a[i-1][j]>=1 && a[i-1][j]!=k){
						a[i][j]=k;
						count++;
					}
					else if(a[i][j-1]>=1 && a[i][j-1]!=k){
						a[i][j]=k;
						count++;
						
					}
					
			}
		}
	}
	printf("%d\n",count);
	
	return 0; 
}

