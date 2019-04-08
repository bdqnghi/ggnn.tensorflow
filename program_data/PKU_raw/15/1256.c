int main(){
	int i=0,j=0,n,a1,a2,b1,b2,s;
	int sz[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]!=0&&sz[i][j+1]==0){
				a1=i;
				b1=j+1;
			}
			if(sz[i][j]==0&&sz[i][j+1]!=0){
				b2=j;
				i=n;
			}
		}
	}
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(sz[i][j]==0&&sz[i+1][j]!=0){
		        a2=i;
				j=n;
			}
		}
	}
	s=(a2-a1-1)*(b2-b1-1);
printf("%d",s);
return 0;
	}
