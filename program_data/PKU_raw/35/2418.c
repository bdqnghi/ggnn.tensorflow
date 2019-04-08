int main(){
int n,m,i,j,s,p,t,q,l,k,e=0;
int a[8][8];
scanf("%d,%d",&m,&n);     
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);  
    } 
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        s=1;
        l=1;
    	for(k=0;k<n;k++){
            if(a[i][j]>a[i][k]){
                s=s+1;
            }
        }
        if(s==n){
          t=i; 
          p=j;
          for(q=0;q<m;q++){
            if(a[t][p]<a[q][p]){
               l=l+1;
            }
          }
        if(l==m){
            e=e+1;
            printf("%d+%d",t,p);
        }
      }  
    }
}
if(e==0){
    printf("No");
}
    return 0;
}

