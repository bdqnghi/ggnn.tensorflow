main(){
    int m,n;
    int x,y,x1,x2,y1,y2;
    int s[M][N],a[M][N]={0};
    scanf("%d %d",&m, &n);
    for(y=0;y<m;y++){
		for(x=0;x<n;x++){
			scanf("%d",&s[y][x]);
        }
    }
    for(y=0;y<m;y++){
        a[y][n-1]=s[y][n-1];
        for(x1=0;x1<n-1;x1++){  
               if(s[y][x1]>=s[y][x1+1]){
                       a[y][x1]=s[y][x1];
                       }
               }
		for(x2=1;x2<n;x2++){    
               if(s[y][x2]<s[y][x2-1]){
                       a[y][x2]=0;
                       }
               }
	}
	for(x=0;x<n;x++){
		for(y1=0;y1<m-1;y1++){  
               if(s[y1][x]<s[y1+1][x]){ 
                     a[y1][x]=0;
                     }
               }
		for(y2=1;y2<m;y2++){    
               if(s[y2][x]<s[y2-1][x]){
                     a[y2][x]=0;
                     }
               }
        }
	for(y=0;y<m;y++){
		for(x=0;x<n;x++){
              if(a[y][x]!=0){          
                      printf("%d %d\n",y,x);
                      }
              }
	    }
    return 0; 
}
