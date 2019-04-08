int main()
{
    int n,i,e,j=1,k;
    int x[10];
    int y[10];
    int z[10];
    double a[45],m;
    int b[45];
    int c[45];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d %d %d",&(x[i]),&(y[i]),&(z[i]));
    }
    for(i=1;i<=n-1;i++){
       for(k=i+1;k<=n;k++){
    a[j]=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])+(z[i]-z[k])*(z[i]-z[k]));
    b[j]=i;
    c[j]=k;
    j++;}}
    j=j-1;
    for(k=1;k<=j-1;k++){
    for(i=1;i<=j-k;i++){
    if(a[i]<a[i+1]){
    m=a[i];a[i]=a[i+1];a[i+1]=m;
    e=b[i];b[i]=b[i+1];b[i+1]=e;
    e=c[i];c[i]=c[i+1];c[i+1]=e;
    }}}
    for(k=1;k<=j;k++){
    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[b[k]],y[b[k]],z[b[k]],x[c[k]],y[c[k]],z[c[k]],a[k])
    ;}
    return 0;
}
