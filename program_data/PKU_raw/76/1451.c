int main(){
    int n,i,k,e,q;
    int a[w],b[w];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }for(k=1;k<n;k++){
        for(i=0;i<n-k;i++){
         if(a[i]>a[i+1]){
         e=a[i];
         a[i]=a[i+1];
         a[i+1]=e;
         e=b[i];
        b[i]=b[i+1];
        b[i+1]=e;
         }   
        }
    }q=0;
    for(i=0;i<n-1;i++){
     if(b[i]<a[i+1]){
     q=1;
     break;
     }else{
     if(b[i]>b[i+1]&&(i!=n-1)){
         e=b[i];
         b[i]=b[i+1];
         b[i+1]=e;
     }
     }   
    }
   
        
    
   if(q==1){printf("no");
   }else{printf("%d %d",a[0],b[n-1]);}
return 0;
}



