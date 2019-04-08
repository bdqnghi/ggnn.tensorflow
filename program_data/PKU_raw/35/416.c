int main(){
	int m,n,i,k,a,b;
	int sz[8][8];
	int result=0;
    scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
        for(k=0;k<n;k++){
			scanf("%d",&sz[i][k]);
		}
	}
    for(i=0;i<m;i++){
        a=i;
        b=0;
        for(k=0;k<n-1;k++){
            if(sz[a][b]<sz[i][k+1]){
                b=k+1;
			}
        }
		result=0;
        for(int j=0;j<m;j++){
            if(sz[a][b]<=sz[j][b]){
				result++;
			}
        }
        if(result==m){
            break;
        }
    }
    if(result==m){
        printf("%d+%d",a,b);
	}else{
        printf("No");
	}
    return 0;
}
