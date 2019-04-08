int main()
{
    int n,i,j,k,x[100],p=0,q=0;
    char a[100][10000];
    cin>>n;
    cin.get();
    for(i=0;i<n;i++)
    {
        cin.getline(a[i],81);
    }
    for(i=0;i<n;i++)
    {
        x[i]=strlen(a[i]);
    }
    for(i=0;i<n;i++)
    {   p=0;
        if(a[i][0]=='_'||((a[i][0]<='z')&&(a[i][0]>='a'))||((a[i][0]<='Z')&&(a[i][0]>='A')))
        {
              for(j=0;j<x[i];j++)
              {
                if(((a[i][j]<65)&&(a[i][j]>57))||((a[i][j]<95)&&(a[i][j]>90))||(a[i][j]<48)||(a[i][j]>122)||(a[i][j]==96)||(a[i][j]==' '))
                p=1;
              }
        }
        else p=1;
        if (p==0)
        cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;

}