int fenfa(int x,int y);
int main(){
	int t;
	int M[25],N[25];
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		scanf("%d%d",&M[i],&N[i]);
	}
	int K[25];
	for(i=0;i<t;i++){
		K[i]=fenfa(M[i],N[i]);
		printf("%d\n",K[i]);
	}
	return 0;
}
int fenfa(int x,int y){
	int r;
	if(x==1){
		r=1;
	}else if(y==1){
		r=1;
	}else if(x!=1&&y!=1&&x<y){
		r=fenfa(x,y-1);
	}else if(x!=1&&y!=1&&x>=y){
		r=fenfa(x,y-1)+fenfa(x-y,y);
	}
	return r;
}