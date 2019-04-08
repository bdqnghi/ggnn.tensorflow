int main(){
    int n,a[300],i,k;
    char b=',';
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d ",&a[i]);}
    printf("%d",a[0]);
    for(i=1;i<n;i++){
                     for(k=0;k<i;k++){
                                      if(a[k]==a[i]) break;}
                     if(k==i){printf("%c%d",b,a[i]);}
                     }
    return 0; 
}
    
                     
