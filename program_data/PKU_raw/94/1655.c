int main(){
	int n,k,e;
	int m=0;
    int sc[N];
	int js[N];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     scanf("%d ",&sc[i]);
	}
    for(int k=0;k<n;k++){
		if(sc[k]%2!=0){
			js[m]=sc[k];
			m++;
			}
     }
    m--;
    for (int d=0;d<m;d++){
		for(int b=0;b<m-d;b++){
	     if(js[b]>js[b+1]){
	             e=js[b+1];
	             js[b+1]=js[b];
	             js[b]=e;
		 }
		}
	}
      for(int u=0;u<m;u++){
              printf("%d,",js[u]);
	  }
	  printf("%d",js[m]);
   return 0;
}
