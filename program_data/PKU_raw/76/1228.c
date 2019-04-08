int main(){
    int n,i,m=10000,b,c,k;
    int a[m];
    scanf("%d",&n);
    for(i=0;i<m;i++){
        a[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%d %d",&b,&c);
        if(c>b){
            for(k=0;k<m;k++){
                if(k>=b+1&&k<=c){a[k]=1;}
            }
        }
    }
    for(i=0;i<m;i++){
        if(a[i]==1){b=i-1;break;}
    }
    for(i=m-1;i>=0;i--){
        if(a[i]==1){c=i;break;}
    }
    for(i=b+1;i<=c+1;i++){
        if(a[i]!=1){break;}
    }
    if(i==c+1){printf("%d %d",b,c);}
    else{printf("no");}
    return 0;
}