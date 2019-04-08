int main()
{
    int n,sz[1000],K,m,d[1000],s=0,t,o;
    scanf("%d%d", &n,&K);
    int e, i;
	    for (i=0;i<n;i++){
	    scanf("%d", &(sz[i]));}
    for(int k=1;k<=n;k++){
        for (i=0;i<n-k;i++){
		  if (sz[i]>sz[i+1]){
			e=sz[i+1];
			sz[i+1]=sz[i];
			sz[i]=e;
		  }
    	  
        } 
	    
      }
      for(i=0;i<n;i++){
            o=i;
            d[o]=sz[i];}
      for(i=0;i<n;i++){
          m=K-sz[i];
          t=0;
         for (o=0;o<n;o++){
             if(o!=i&&m==d[o]){t++;}
         }
         if(t>0){s++;}
    }
     if(s>0){printf("yes");}
        else{printf("no");}
return 0;
}

