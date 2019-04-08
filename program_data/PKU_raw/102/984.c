
int main(){
    int n,i,j,k=0,l=0;
    double height,m[42],f[42],temp;
    char sex[7];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s%lf",sex,&height);
        if(sex[0]=='m'){
            m[k]=height;
            k++;
        }else if(sex[0]=='f'){
            f[l]=height;
            l++;
        }
    }
    
    for(i=0;i<k-1;i++){
        for(j=i+1;j<k;j++){
            if(m[j]<m[i]){
                temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
        }
    }
    
    for(i=0;i<l-1;i++){
        for(j=i+1;j<l;j++){
            if(f[j]>f[i]){
                temp=f[i];
                f[i]=f[j];
                f[j]=temp;
            }
        }
    }
    
    for(i=0;i<k;i++){
        if(i==0)
            printf("%.2lf",m[i]);
        else
            printf(" %.2lf",m[i]);
    }
    for(i=0;i<l;i++)
        printf(" %.2lf",f[i]);
    
    return 0;
}
