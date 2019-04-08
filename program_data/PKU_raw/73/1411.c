int main(){
	int n=5,i,j,e,lie=0,hang=0,k=0,m,sz[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	scanf("%d",&sz[i][j]);
        }
    }
	for(i=0;i<n;i++){
		e=-1;
		for(j=0;j<n;j++){
			if(sz[i][j]>e){
				e=sz[i][j];
				lie=j+1;
				hang=i+1;
			}	
		}
		k=0;
		for(m=0;m<n;m++)
		{
			if(e>sz[m][lie-1]){
				k=1;
				break;
			}
		}
			if(k==0){
				printf("%d %d %d",hang,lie,e);
				scanf("%d",1);
				return 0;
			}
	}
	printf("not found");	 
    scanf("%d",1);
    return 0;
}
