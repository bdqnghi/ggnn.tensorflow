int main(){
    int n,c=0,d=0;
    scanf("%d",&n);
    int a[500],b[500]={0};
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2!=0) c=c+1;
            }
            b[-1]=0;
    int i=0;
            for(int j=0;j<n;j++){
                    if(a[j]%2!=0){b[i]=a[j];i=i+1;}
                    }
    for(int k=1;k<=c;k++){
    for(int i=0;i<c-k;i++){
            if(b[i]>b[i+1]){
                            d=b[i+1];
                            b[i+1]=b[i];
                            b[i]=d;
                            }
            }
            }
    for(int i=0;i<c;i++){
            if(i!=c-1)printf("%d,",b[i]);
            else printf("%d",b[i]);
            }
    return 0;        
    }