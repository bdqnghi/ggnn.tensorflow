int change(int a,int b);
int x[5][5];
int main(){
	int n,i,j,a,b;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
	        scanf("%d",&x[i][j]);
		}
	}
	scanf("%d%d",&a,&b);
	n=change(a,b);
	if(n==0) printf("error");
	else{
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j==0) printf("%d",x[i][j]);
				else printf(" %d",x[i][j]);
			}
			printf("\n");
		}
	}
	
    return 0;

}

int change(int a,int b){
	int i,j,y;
	
	if(a>4||b>4) return 0;
	else{
		for(i=0;i<5;i++){
			y=x[a][i];
			x[a][i]=x[b][i];
			x[b][i]=y;
		}
	}
	return 1;
}
	