int main(int argc, char* argv[])
{
	int i,k;
	while(1){
		int sz[16];
		int add=0;
		for(i=0;i<16;i++){
			scanf("%d",&sz[i]);
			if(sz[i]==0||sz[i]==-1){
			break;
			}
			
		}
		if(sz[0]==-1){
		break;
		}for(i;i<16;i++){
			sz[i]=0;
			}
		for(i=0;i<16;i++){
			for(k=0;k<16;k++){
				if(sz[k]!=0&&sz[k]==2*sz[i]){
					add=add+1;
				}
			}
		}
		printf("%d\n",add);
	}
	return 0;
}