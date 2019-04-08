int main(){
    int n[100],m[110];
    int i,j,k;
    int t,times;
    int a[3000],b[10000],c[3000];
    for(times=1;times<1000;times++)
    {scanf("%d %d\n",&n[times],&m[times]);if(n[times]==0)break;
               for(i=1;i<=n[times];i++) {a[i]=i;}
                if(n[times]==1)a[times]=1;                  
      while(n[times]>1){
       t=m[times]%n[times];
       i=1;
       n[times]--;
           for(i=1;i<=n[times];i++){
           if(i+t-1<=n[times])b[i]=a[t+i];
           else{b[i]=a[t+i-n[times]-1];}  } 
           for(j=1;j<=n[times];j++)
              {a[j]=b[j];}
     }
             
           printf("%d\n",a[1]);}
             
            
              return 0;} 
