int main(){
	int n,sz[100][100],i,j,x1=-1,y1,x2=-1,y2,s;
	
	scanf("%d",&n);
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}



	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if (sz[i][j]==0){
				x1=i;
			    y1=j;
			break;
			}
			else continue;
		}
		if(x1==-1) continue;
		else break;
	}
for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if (sz[i][j]==0){
				x2=i;
			    y2=j;
			break;
			}
			else continue;
		}
		if(x2==-1) continue;
		else break;
	}
    s=(x2-x1-1)*(y2-y1-1);

   printf("%d",s);
	return 0;
}
