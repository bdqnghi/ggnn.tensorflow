int main(){
    int i,n,a[1000],b[1000],c[10000],s=1,t,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n;i++){
        if(i==0)
            min=a[i];
        if(a[i]<=min)
            min=a[i];
    }
	for(i=0;i<n;i++){
        if(i==0)
            max=b[i];
        if(b[i]>=max)
            max=b[i];
    }
    for(t=2*min;t<=2*max;t++)
    {
        c[t]=0;
    }
    for(i=0;i<n;i++){
        for (t=2*a[i];t<=2*b[i]; t++) {
            c[t]=1;
        }
    }
    for(t=2*min;t<=2*max;t++)
    {
        s*=c[t];}
    if(s==0)
    {
        printf("no");}
    else
    {
        printf("%d %d",min,max); }
    return 0;
}
