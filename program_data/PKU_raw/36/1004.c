
void main() 
{
    char p[1000],q[1000];
    int a[128]={0},b[128]={0};
    int i,j,n,m,t=0;
    scanf("%s%s",p,q);
    n=strlen(p);
    m=strlen(q);
    for(i=0;i<n;i++)
       a[p[i]]++;
    for(i=0;i<m;i++)
       b[q[i]]++;
    for(i=0;i<128;i++)
       if(a[i]!=b[i]) {t=1;break;} 
    if(t==0) printf("YES\n");
    else printf("NO\n");
}