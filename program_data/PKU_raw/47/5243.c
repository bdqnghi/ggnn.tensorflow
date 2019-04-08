int main(){
    
    int m,n,i;
    scanf("%d",&n);
    int sz[100];
	if((n>1)&&(n<100)){
	  for(i=0;i<n;i++){
		  scanf("%d",&(sz[i]));
	  }
	  for(m=n-1;m>=0;m--){
          if(m>0){
              printf("%d ",sz[m]);
              }
		  else
              printf("%d",sz[m]);
	  }
	}
	return 0;
}

