int main(){
    int n,m,i,j,k,know[10000],known[10000],x,y,z;
    scanf("%d",&n);
    m=0;
    z=0;
    for(i=0;i<10000;i++){
        scanf("%d",&know[i]);
        scanf("%d",&known[i]);
        m=i;
        if(know[i]==0&&known[i]==0)
            break;
    }
    for(i=0;i<n;i++){
        x=0;
        y=0;
        for(j=0;j<m;j++){
            if(i==know[j])
                x++;
            if(i==known[j])
                y++;
        }
        if(x==0&&y==n-1){
            printf("%d\n",i);
            z=1;
        }
    }
    if(z==0)
    printf("NOT FOUND\n");
    return 0;
    }
