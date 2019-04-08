int main()
{
    void px (int a[],int l1,int b[],int l2);
    int len1,len2,a[100],b[100],i;
    cin>>len1>>len2;
    for(i=1;i<=len1;i++)
     cin>>a[i];
    for(i=1;i<=len2;i++)
     cin>>b[i];
    px(a,len1,b,len2);
    return 0;
}

    void px (int a[],int l1,int b[],int l2)
{
    int i,j,temp;
    for(i=1;i<=l1-1;i++)
      for(j=i+1;j<=l1;j++)
        if(a[i]>a[j])
          {temp=a[j],a[j]=a[i],a[i]=temp;}

    for(i=1;i<=l2-1;i++)
      for(j=i+1;j<=l2;j++)
        if(b[i]>b[j])
          {temp=b[j],b[j]=b[i],b[i]=temp;}
    for(i=1;i<=l1;i++)
    cout<<a[i]<<" ";
    for(i=1;i<=l2-1;i++)
    cout<<b[i]<<" ";
    cout<<b[l2];
}
