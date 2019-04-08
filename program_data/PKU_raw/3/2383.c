int main(){
   int n;
   int k;
   int i;
   int m;
   int zzd[1001];
   int hzy[1001];
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++){
        scanf("%d",&zzd[i]);
        }
          for(i=0;i<n;i++){
          hzy[i]=zzd[i];
          }
          for(m=0;m<n;m++){
              for(i=0;i<n;i++){
                   if(zzd[m]+hzy[i]==k){
                            printf("yes");
                            break;
                            }
                            }
                            if(m==n-1){
                               printf("no");
                               break;  
                               }  
                              if(zzd[m]+hzy[i]==k){
                                                   break;
                                                   }    
                            }
      return 0;
      }