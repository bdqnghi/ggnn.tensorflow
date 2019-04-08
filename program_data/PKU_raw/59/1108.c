int main(){
    int n,i,j,k,m,s=0;
	int a[100][100]={0},b[100][100]={0};
	char c[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",c[i]);
		for(j=0;j<n;j++){
			if(c[i][j]=='.')
				a[i][j]=0;
			else if(c[i][j]=='#')
				a[i][j]=-99999999;
			else if(c[i][j]=='@')
				a[i][j]=100;
		}
	}
	scanf("%d",&m);
	for(k=1;k<m;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			    if(a[i][j]>0)
					b[i][j]=1;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(b[i][j]==1){
				    a[i][j-1]++;
					a[i][j+1]++;
					a[i-1][j]++;
					a[i+1][j]++;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		    if(a[i][j]>0)
				s++;
		}
	}
	printf("%d\n",s);
return 0;	
}