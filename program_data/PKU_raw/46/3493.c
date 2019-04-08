int main(){
   int r,c;
    scanf("%d%d",&r,&c); 
    int sz[r][c];
    for(int i=0;i<r;i++){for(int k=0;k<c;k++){scanf("%d",&sz[i][k]);}}
    int a ;
    if(r>c){a=c;}
    else {a=r;}int x=0;
    for (int i=0;i<a/2;i++){for (int m=x;m<c-x;m++){printf("%d\n",sz[x][m]);}
                             for(int m=x+1;m<r-x;m++){printf("%d\n",sz[m][c-1-x]);}
                             for(int m=c-2-x;m>x;m--){printf("%d\n",sz[r-1-x][m]);}
                             for(int m=r-1-x;m>x;m--){printf("%d\n",sz[m][x]);}
                             x++;
         }
       if(c>=r&&r%2!=0){for(int i=r/2;i<c-r/2;i++){printf("%d\n",sz[r/2][i]);}}
                            if(r>c&&c%2!=0){for(int i=c/2;i<r-c/2;i++){printf("%d\n",sz[i][c/2]);}
         }
         
        
         return 0;
}
   
