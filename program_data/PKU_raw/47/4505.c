int main(){
    int u[200],i,n,a[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    if(i==n-1){
               scanf("%d",&(u[i]));
               break;
               }
    scanf("%d ",&(u[i]));  
}
for(i=0;i<n;i++){
a[n-1-i]=u[i];
}
for(i=0;i<n;i++){
       if(i==n-1){
               printf("%d",a[i]);
               break;
               }
    printf("%d ",a[i]);  
} 

return 0;
}          
