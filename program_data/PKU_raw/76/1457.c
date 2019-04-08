int main (){
    int i,m,k,n,t;
    double d;
    scanf("%d\n",&n);
    int a[n],b[n],A[n],B[n];
    for(i=0;i<n;i++){
        scanf("%d%d\n",&a[i],&b[i]);
}
    for(i=0;i<n;i++){
            A[i]=a[i];
            B[i]=b[i];
   }
    for(k=n-1;k>0;k--){
        for(i=0;i<k;i++){
            if(A[i]>A[i+1]){
               t=A[i];              
               A[i]=A[i+1];               
               A[i+1]=t;              
}
}
}
    for(k=n-1;k>0;k--){
        for(i=0;i<k;i++){
            if(B[i]>B[i+1]){
               m=B[i];
               B[i]=B[i+1];              
               B[i+1]=m; 
}
}
}
    for(d=A[0]+0.5;d<B[n-1];d++){
         for(i=0;i<n;i++){
             if(d>a[i]&&d<b[i]){
                break;
}
}
        if(i==n){
printf("no");
   break;  
}  
}
    if(d==B[n-1]+0.5){
   printf("%d %d",A[0],B[n-1]); 
}
return 0;
}