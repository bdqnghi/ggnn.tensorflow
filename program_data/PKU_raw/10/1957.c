int main()
{
    int n,j,m;
    scanf("%d",&n);
    int i,h[26];
    for(i=1;i<=n;i++){scanf("%d",&h[i]);};
    int q[26];
    for(i=1;i<=n;i++){q[i]=1;};
    for(i=n-1;i>=1;i--)
    {m=0;
    for(j=i+1;j<=n;j++){
    if(h[j]<=h[i]){
    if(m<q[j]){m=q[j];};};};
    q[i]=q[i]+m;
}
m=0;
for(i=1;i<=n;i++){if(m<q[i]){m=q[i];};};
printf("%d",m);

}           
