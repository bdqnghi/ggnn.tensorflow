int has(int n,int m){
    if((0<=n)&&(n<5)&&(0<=m)&&(m<5)){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int i,r,m,n;
	int s[5][5];
	for(i=0;i<5;i++){
		for(r=0;r<5;r++){
			if(r<4){
			scanf("%d ",&s[i][r]);
			}
			if(r==4){
			scanf("%d",&s[i][r]);
			}
		}
	}
	scanf("%d %d",&m,&n);
	if(has(m,n)){
		int tmp;
		for(i=0;i<5;i++){
			tmp=s[m][i];
			s[m][i]=s[n][i];
			s[n][i]=tmp;
		}
		for(i=0;i<5;i++){
			printf("%d %d %d %d %d\n",s[i][0],s[i][1],s[i][2],s[i][3],s[i][4]);
		}
	}else{
		printf("error\n");
	}
	return 0;
}
	