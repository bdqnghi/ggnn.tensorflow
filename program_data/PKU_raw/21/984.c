int main()
{
    int n;
    float pj=0,max=0,b[300],a[300],sum=0;
    int c[300]={0};
    int i=0,j=0,k=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    pj=sum/n;
    for(i=0;i<n;i++)
    {
        if((pj-a[i])>0) b[i]=pj-a[i];
        else b[i]=a[i]-pj;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]>max) max=b[i];
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==max)
        {
            c[k]=i;
            k++;
        }
    }
    for(i=0;i<(k-1);i++)
    for(j=0;j<(k-i-1);j++)
    if(a[c[j]]>a[c[j+1]]) swap(a[c[j]],a[c[j+1]]);
    for(i=0;i<k-1;i++)
        cout<<a[c[i]]<<",";
        cout<<a[c[k-1]];
    
    return 0;
}
            
