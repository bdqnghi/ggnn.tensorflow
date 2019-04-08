int main()
{
    int n1=0,n2=0,i=0,j=0,temp=0;
    cin>>n1>>n2;
    int a1[100]={0},a2[100]={0},c[200]={0};
    for (i=0;i<n1;i++)
    cin>>a1[i];
    for (i=0;i<n2;i++)
    cin>>a2[i];
    for(i=0;i<n1-1;i++)
    {for (j=0;j<n1-1-i;j++)
    {
        if (a1[j]>a1[j+1])
        { temp=a1[j];a1[j]=a1[j+1];a1[j+1]=temp; }
	}}
    for(i=0;i<n2-1;i++)
    {for (j=0;j<n2-1-i;j++)
    {
        if (a2[j]>a2[j+1])
        { temp=a2[j];a2[j]=a2[j+1];a2[j+1]=temp; }
	}}
    for (i=0;i<n1;i++)
    c[i]=a1[i];
    for (i=n1;i<n1+n2;i++)
    c[i]=a2[i-n1];
    for (i=0;i<n1+n2-1;i++)
    cout<<c[i]<<" ";
    cout<<c[n1+n2-1];
    return 0;
}
