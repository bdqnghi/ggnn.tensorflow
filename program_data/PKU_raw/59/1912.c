int main(){
char a[100][100];
int j,i,n,m,s=0,p;
scanf("%d\n",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        scanf("%c ",&a[i][j]);
    }
 }   
for(i=0;i<=n+1;i++){
    a[i][0]='#';
    a[i][n+1]='#';
}
for(j=1;j<=n;j++){
    a[0][j]='#';
    a[n+1][j]='#';
}
scanf("%d\n",&m);
for(p=0;p<m-1;p++){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(a[i][j]=='@'){
                if(a[i][j-1]=='.'){
                    a[i][j-1]='t';
                }
                if(a[i][j+1]=='.'){
                    a[i][j+1]='t';
                }
                if(a[i-1][j]=='.'){
                    a[i-1][j]='t';
                }
                if(a[i+1][j]=='.'){
                    a[i+1][j]='t';
                }
            }
       }
  }
        for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
           if(a[i][j]=='t'){
           a[i][j]='@';
       }
     }
  } 
}   
 for(i=1;i<=n;i++){
   for(j=1;j<=n;j++){
       if(a[i][j]=='@'){
           s=s+1;
       }
     }
  } 


printf("%d",s);    
    
    return 0;
}