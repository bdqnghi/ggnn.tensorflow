int main (){
int m,n,i,j,a,b,c,d;
int sz[20][20];
scanf("%d %d",&m,&n);
for (i=0;i<m;i++){
  for (j=0;j<n;j++){
      scanf("%d",&sz[i][j]);
   }
 }
for (i=0;i<m;i++){
  for (j=0;j<n;j++){
	 if (i!=0&&i!=m-1&&j!=0&&j!=n-1){
       a=sz[i-1][j]-sz[i][j];
       b=sz[i+1][j]-sz[i][j];
       c=sz[i][j-1]-sz[i][j];
       d=sz[i][j+1]-sz[i][j];
       if (a<=0&&b<=0&&c<=0&&d<=0){
             printf("%d %d\n",i,j); 
			 continue;                  
           }
       }       
     if (i==0){
			if(j==0){
			  b=sz[i+1][j]-sz[i][j];
			  d=sz[i][j+1]-sz[i][j];
			  if (b<=0&&d<=0){
                  printf("%d %d\n",i,j); 
			 continue;                              
               }
			}
			if(j==n-1){
		        	b=sz[i+1][j]-sz[i][j];
                    c=sz[i][j-1]-sz[i][j];
					if (b<=0&&c<=0){
                      printf("%d %d\n",i,j); 
			 continue;                              
                    }
		    	}
			else {
				b=sz[i+1][j]-sz[i][j];
				c=sz[i][j-1]-sz[i][j];
			    d=sz[i][j+1]-sz[i][j];
			     if (b<=0&&c<=0&&d<=0){
                 printf("%d %d\n",i,j);  
			 continue;                             
                 }
				}
		}
     if (i==m-1){
			if(j==0){
				 a=sz[i-1][j]-sz[i][j];
			     d=sz[i][j+1]-sz[i][j];
			  if (a<=0&&d<=0){
                  printf("%d %d\n",i,j);  
			 continue;                             
                 }
			}
			if(j==n-1){
		        	a=sz[i-1][j]-sz[i][j];
                    c=sz[i][j-1]-sz[i][j];
					if (a<=0&&c<=0){
                      printf("%d %d\n",i,j);  
			 continue;                             
                    }
		    	}
			else {
				a=sz[i-1][j]-sz[i][j];
				c=sz[i][j-1]-sz[i][j];
			    d=sz[i][j+1]-sz[i][j];
			     if (a<=0&&c<=0&&d<=0){
                 printf("%d %d\n",i,j);  
			 continue;                             
                 }
				}
		}
	 if (j==0&&i!=0&&i!=m-1){
			a=sz[i-1][j]-sz[i][j];
            b=sz[i+1][j]-sz[i][j];
	        d=sz[i][j+1]-sz[i][j];
			  if (a<=0&&b<=0&&d<=0){
                 printf("%d %d\n",i,j);  
			 continue;                             
                 }
      }
    if (j==n-1&&i!=0&&i!=m-1){
			a=sz[i-1][j]-sz[i][j];
            b=sz[i+1][j]-sz[i][j];
            c=sz[i][j-1]-sz[i][j];
			  if (a<=0&&b<=0&&c<=0){
                 printf("%d %d\n",i,j);  
			 continue;                             
                 }
      }
      }
	}
 return 0;
}