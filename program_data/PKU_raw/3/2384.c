int main(){
    int n,k,a,b,i,j,s;
    int sz[2000];
    scanf("%d %d",&n,&k);
    s=0;
    for(i=0;i<n;i++){
                     scanf("%d",&sz[i]);}
    for(i=0;i<n;i++){
                     for(j=i+1;j<n;j++){a=sz[i];
                                        b=sz[j];
                                        if(a+b==k){s++;}}}
    if(s!=0){printf("yes");}
    else{printf("no");}
    return 0;
}