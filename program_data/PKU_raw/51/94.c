int main(){
    char a[600],b[600][6]={0};
    int n,i,j,k,l,o,p,count[600]={0},max;
    scanf("%d",&n);
    scanf("%s",a);
    l=strlen(a);
    
    for(k=0;k<=l-n;k++){
        o=0;
        for(i=k;i<k+n;i++){
            b[k][o++]=a[i];
            }
        
         //printf("%s\n",b[k]);
         
        }
    //printf("%d",k);
    for(i=0;i<k;i++){
        for(j=i+1;j<=k;j++){
            if(strcmp(b[i],b[j])==0){
                
                count[i]++; 
                //printf("%d\n",count[i]) ;              
                }
            }
        }
    max=count[i]+1;
    for(i=0;i<=l-n;i++){
        if(count[i]>max-1){
            max=count[i]+1;            
            }
        }
    if(max==1) printf("NO");
    else{
        printf("%d\n",max);
        for(i=0;i<=l-n;i++){
            if(max==count[i]+1)  printf("%s\n",b[i]);            
            }
        }
    scanf("%d",&i);
    return 0;
    }
