int main(){
 int n,a[50000],b[50000],i,j,t1,t2,c,d,k;
 char e='x';
 scanf("%d",&n);
 d=0;
 i=0;
 while(i<n){
  scanf("%d%d",&a[i],&b[i]);
  i=i+1;
 }
 for(j=0;j<n-1;j=j+1){
                       for(i=0;i<n-1-j;i=i+1){
                                            if(a[i]>a[i+1]){
                                                            t1=a[i];
                                                            t2=b[i];
                                                            a[i]=a[i+1];
                                                            b[i]=b[i+1];
                                                            a[i+1]=t1;
                                                            b[i+1]=t2;
                                            }
                       }
    }
    i=0;
    while(i<n-1){
               if(b[i]<a[i+1]){
                               e='y';
                               break;
                               }
               else if(b[i]>b[i+1]){
                    b[i+1]=b[i];
                      }
               i=i+1;
    }
    if(e=='y'){
                        printf("no");
    }
    if(e=='x'){ 
     printf("%d %d",a[0],b[n-1]);
    }
 return 0;
}