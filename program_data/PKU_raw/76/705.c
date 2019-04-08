int main()
{
    int a[ke],b[ke],c[ke],d,i,j,s,n,L,M,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d%d",&a[i],&b[i]);}
    for(i=0;i<ke;i++){c[i]=1;}
    for(i=0;i<n;i++) {for(j=a[i];j<b[i];j++) {c[j]=0;}}
    for(i=1;i<n;i++)
        {
            if(a[i]<a[0]) a[0]=a[i];
            if(b[i]>b[0]) b[0]=b[i];
        }
    L=b[0]-a[0]+1;
    M=0;
    for(i=0;i<b[0];i++){M=c[i]+M;}
    if((M+L)==(b[0]+1)) printf("%d %d",a[0],b[0]);
    else printf("no");
    return 0;
}

