int shuzu[1000000];
int main(){
    int n,k,x,num=0;
    scanf("%d",&n);
    for (int t=0;t<n;t++){
        scanf("%d",&shuzu[t]);
    }
    scanf("%d",&k);
    for (int j=0;j<n;j++){
           if (shuzu[j]==k){
                for (int i=j;i<=n-1;i++){
                      x=shuzu[i];
                      shuzu[i]=shuzu[i+1];
                      shuzu[i+1]=x;
                }
                n--;
               if (shuzu[j]==k){
                    j=j-1;
              }
           }
    }          
    for (int m=0;m<n;m++){
            if (m==0){
            printf("%d",shuzu[m]);
            }
            else {
                   printf(" %d",shuzu[m]);    
                   }
    } 
return 0;    
}