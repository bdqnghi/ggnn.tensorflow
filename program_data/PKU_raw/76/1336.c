    

int main(){
    int n,i,j,min,max,sum;
    
    scanf("%d",&n);

    int a[n];
    int b[n];
    
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    
    min=a[0];
    max=b[0];
    
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(b[i]>max){
            max=b[i];
        }
        
    }
    int ce[2*max+1];
    for(i=2*min;i<2*max;i++){
        ce[i]=1;

    }
    for(j=0;j<n;j++){
        for(i=2*(a[j]);i<=2*(b[j]);i++){
            ce[i]=0;
            
        }
    }
    sum=0;
    for(j=0;j<n;j++){
        for(i=2*min;i<=2*max;i++){
            sum=sum+ce[i];
            
        }
    }

    if(sum==0){
        printf("%d %d",min,max);
    }
    if(sum!=0){
        printf("no");
    }
    
    
    return 0;
    
}
