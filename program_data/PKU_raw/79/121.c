int main(){
	int n=1,m=1,a,j;
	
    while(n!=0 && m!=0){
		a=0;
		scanf("%d %d",&n,&m);
		
		int i;
		int *p=(int*)malloc(sizeof(int)*(n+1));
		for(i=1;i<=n;i++){
			p[i]=i;
		}
		int k=n;
	
		while(k>1){             //k\n??
			for(i=1;i<=n;i++){
				if(p[i]!=0){
			         a++;
				     if(a%m==0){
			       	   p[i]=0;
				       k--;
				     if(k==1){
						break;
					  }
					   a=0;
					 }
				}
			}
		}
		
	   for(j=1;j<=n;j++){
		   if(p[j]!=0){
	       printf("%d\n",p[j]);
		   }
		}
	   free(p);
	}
	
	return 0;
}