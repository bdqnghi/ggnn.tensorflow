int main(){
    int n,i,j,o=0,k=0;
    double b[100],u,b1[100]={0.0},b2[100]={0.0};
    char a[100][10];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        scanf("%s %lf",a[i],&b[i]);
        }
    for(i=0;i<n;i++){
        if(strcmp(a[i],"male")==0) b1[o++]=b[i];
        else if(strcmp(a[i],"female")==0) b2[k++]=b[i];            
            
        }
    for(j=1;j<=o;j++){
        for(i=0;i<o-j;i++){
            if(b1[i]>b1[i+1]){
                u=b1[i+1];
                b1[i+1]=b1[i];
                b1[i]=u;
                }
            }
        }
    for(j=1;j<=k;j++){
        for(i=0;i<k-j;i++){
            if(b2[i]<b2[i+1]){
                u=b2[i+1];
                b2[i+1]=b2[i];
                b2[i]=u;
                }
            }
        }
    for(i=0;i<o;i++) printf("%.2lf ",b1[i]);
    for(i=0;i<k-1;i++) printf("%.2lf ",b2[i]);
    printf("%.2lf",b2[k-1]);
   
    
    
    
    scanf("%d",&i);
    return 0;
    }
