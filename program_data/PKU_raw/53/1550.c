int main()
{
    int m[500],n,i=0,j,q;
    for(scanf("%d",&n);i<n;i++)scanf("%d",&m[i]);
    printf("%d",m[0]);
    for(i=1;i<n;i++){
        q=1;
        for(j=0;j<i;j++)
            if(m[i]==m[j]){m[j]=0;break;}
        if(m[j])printf(",%d",m[i]);
    }
    return 0;
}