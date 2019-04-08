int main()
{
    int n,i,j;
    cin>>n;
    double c[n];
    double a[n][2];
    for(i=0;i<n;i++)
    {for(j=0;j<2;j++)
    cin>>a[i][j];
    c[i]=a[i][1]/a[i][0];}
    for(i=1;i<n;i++)
    {
    if(c[i]-c[0]>0.05) cout<<"better"<<endl;
    else if(c[0]-c[i]>0.05) cout<<"worse"<<endl;
    else cout<<"same"<<endl;
}
return 0;
}
    
