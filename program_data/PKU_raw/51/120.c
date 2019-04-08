int main(){
    int n,l,e=0,s[500]={0},max,ss[500]={0};
    char a[501];
    scanf("%d",&n);
    scanf("%s",a);
    l=strlen(a);
    for(int i=0;i<l-n+1;i++){
            for(int j=i+1;j<l-n+1;j++){
                    for(int k=0;k<n;k++){
                            if(a[i+k]==a[j+k]){
                            e++;      
                                               }
                            }
                    if(e==n){
                             s[i]++;
                             }
                             e=0;
                    }     
            }
            max=s[0];
    for(int p=0;p<l-n+1;p++){
            if(max<s[p]){
                         max=s[p];
                         }
            }
           int ee=0;
    for(int q=0;q<l-n+1;q++){
            if(max==s[q]){
                          ss[ee]=q;
                          ee++;
                          } 
            }
            if(max!=0){
            printf("%d",max+1);
    
    for(int r=0;r<ee;r++){
            printf("\n");
            for(int t=0;t<n;t++){
                    printf("%c",a[ss[r]+t]);
}
    
}
    
}
else{
     printf("NO");
     }
    

    return 0;
}
