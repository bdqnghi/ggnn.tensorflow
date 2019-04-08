int main(){
    int sz[300];
    int n,m,i,j,c,p;
	for(j=0;;j++){
		p=0;
		scanf("%d%d",&n,&m);
		if(n==0){
			break;}
        for(i=0;i<n;i++){
            sz[i]=i+1;
        }
        for(i=0;i<n;i++){
			c=0;
            while(c<m){
                while(sz[p]==0)
                p=(p+1)%n;
                c++;
                p=(p+1)%n;
            }
            p--;
            if(p<0)
                p=n-1;
            if(i==n-1)
                printf("%d\n",sz[p]);
            sz[p]=0;
           }
      }
      return 0;
}

 

 

