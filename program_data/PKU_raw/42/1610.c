int main(){
    int n,k,a[100000],i,j=0;
    scanf("%d",&n);    
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    
    for(i=0;i<n;i++){
        if(a[i]!=k){
            a[j]=a[i];
            j++;            
            }
        }
    for(i=0;i<j-1;i++) printf("%d ",a[i]);
    printf("%d",a[j-1]);
    
	scanf("%d",&n);
	return 0;
}
