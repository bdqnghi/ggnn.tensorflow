int main()
{
    int a[100],b[100],c[100],d[100],e[100],f[100];
    int n=0,i;
    int s[100];
    for(i=0;i>=0;i++){
        scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
        n++;
        if(a[i]==0 && b[i]==0&& c[i]==0&& d[i]==0&& e[i]==0&& f[i]==0){
           break;
        }
    }
    for(i=0;i<n-1;i++){
       s[i]=(d[i]+12-a[i])*3600+(e[i]-b[i])*60+(f[i]-c[i]);
       printf("%d\n",s[i]);
    }
    return 0;
}