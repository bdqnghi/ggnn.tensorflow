int main(){
    int n,k,i,j=0;
    int s[100];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
         scanf("%d",&(s[i]));
         getchar();
    }
    printf ("%d",(s[0]));
    getchar();
    for(i=1;i<n;i++){
         for(k=0;k<i;k++){
             if(s[i]!=s[k]){
                  j++;
             }
         }
         if(j==i){
             printf(",%d",(s[i]));
             
         }
         j=0;
    }
    printf("\n");
    getchar();
    
    return 0;
}
