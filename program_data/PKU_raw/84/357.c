int main()
{
    int n,i,j,min,max1=0,max2=0;
    int a[100];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    min=a[0];
    for (i=0;i<n;i++) 
    {
        if (a[i]>max1) {max1=a[i];j=i;}
        if (a[i]<min) min=a[i];
    }
    a[j]=min;
    for (i=0;i<n;i++) if (a[i]>max2) max2=a[i];
    cout<<max1<<endl;
    cout<<max2<<endl;
return 0;
}