int main(){
	int i,j,n;
	int sz[100];
	scanf("%d",&n);
	for(i=0;i<100;i++){
		sz[0]=n;
               if(sz[i]==1){
			break;
		}else if(sz[i]%2!=0){
			sz[i+1]=sz[i]*3+1;
		printf("%d*3+1=%d\n",sz[i],sz[i+1]);
		}else if(sz[i]%2==0){
			sz[i+1]=sz[i]/2;
			printf("%d/2=%d\n",sz[i],sz[i+1]);
			}
	}
               printf("End");

		return 0;
}