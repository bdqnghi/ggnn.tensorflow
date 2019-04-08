struct person
{
    char s[6];
    float h;
};
struct person p[50];
int main()
{
    int i,j,n,man,woman;
    float m[50],w[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s%f",p[i].s,&p[i].h);
    man=0;
    woman=0;
    for(i=0;i<n;i++)
    if(p[i].s[0]=='m')
    {
        m[man]=p[i].h;
        man++;
    }
    else
    {
        w[woman]=p[i].h;
        woman++;
    }
    for(j=man-1;j>=0;j--)
    for(i=0;i<j;i++)
    if(m[i]>m[i+1])
    {
        m[i]=m[i]+m[i+1];
        m[i+1]=m[i]-m[i+1];
        m[i]=m[i]-m[i+1];
    }
    for(i=0;i<man;i++)
    printf("%.2f ",m[i]);
    for(j=woman-1;j>=0;j--)
    for(i=0;i<j;i++)
    if(w[i]<w[i+1])
    {
        w[i]=w[i]+w[i+1];
        w[i+1]=w[i]-w[i+1];
        w[i]=w[i]-w[i+1];
    }
    for(i=0;i<woman;i++)
    if(i!=woman-1)
    printf("%.2f ",w[i]);
    else
    printf("%.2f",w[i]);
}
