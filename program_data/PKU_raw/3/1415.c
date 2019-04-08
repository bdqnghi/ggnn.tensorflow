int main(){
    int sz[1000];
	int i,r,s,sh=0;
	int n,k;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(r=1;r<=n;r++){
		int e;
		for(s=0;s<n-r;s++){
			if(sz[s]>sz[s+1]){
				e=sz[s+1];
				sz[s+1]=sz[s];
				sz[s]=e;
			}
		}
	}
	for(int y=0;y<n;y++){
		if(sz[y]+sz[y]==k){
		     sh=0;
		}else if(sz[y]+sz[y]>k){
			for(int w=0;w<y;w++){
				if(sz[y]+sz[w]==k){
					sh=1;
					break;
				}
			}
		}else if(sz[y]+sz[y]<k){
			for(int w=y+1;w<=n;w++){
				if(sz[y]+sz[w]==k){
					sh=1;
					break;
				}
			}
		}
	}
		if(sh==0){
			printf("no");
		}else 
			printf("yes");
		return 0;
	}
