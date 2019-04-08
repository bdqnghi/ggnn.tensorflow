int main(){
    int m,n,a,b,i,k=0,l=0,p=0;
    int s[8][8];
    scanf("%d,%d",&m,&n);
    for(a=0;a<m;a++){for(b=0;b<n;b++){scanf("%d",&s[a][b]);}}
   
    for(a=0;a<m;a++){for(b=0;b<n;b++){
        k=0;
        l=0;
    for(i=0;i<m;i++){if(s[i][b]<s[a][b]){k=1;}}
    for(i=0;i<n;i++){if(s[a][i]>s[a][b]){l=1;}}
    if(k==0&&l==0){printf("%d+%d",a,b);p=1;}
      }
    }
    if(p==0){printf("No");}
    return 0;
}

