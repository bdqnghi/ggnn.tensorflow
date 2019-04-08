int main(){
	int n,k;
         int c=0;
	int sz[1000];
		scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
	scanf("%d",&sz[i]);
	}
	for(int m=0;m<n-1;m++){
	   for(int j=m+1;j<n;j++){
               if(sz[m]+sz[j]==k){
                      c++;
                }
             }
       }
           if(c==0)  printf("no");
           if(c!=0) printf("yes");
	return 0;
	}


