int main()
{
    int sum(int a[100][100],int n);
    int a[100][100];
    int n;
    cin>>n;
    int i,j,k;
    for(i=0;i<n;i++)
        {
         for(j=0;j<n;j++)
              for(k=0;k<n;k++)
                   cin>>a[j][k];   //?????? 
         cout<<sum(a,n)<<endl;
         }
    return 0;
}

int sum(int a[100][100],int n)      //?????????a?1??1??? n???? 
{
    if(n==1)return 0;
    int a_1_1;
    int min[100];
    int i,j,k;
    
    for(i=0;i<n;i++)           //?????? 
        min[i]=a[i][0];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
             if(min[i]>a[i][j])min[i]=a[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
             a[i][j]-=min[i];
             
    for(i=0;i<n;i++)          //?????? 
        min[i]=a[0][i];
    for(j=0;j<n;j++)
        for(i=0;i<n;i++)
             if(min[j]>a[i][j])min[j]=a[i][j];
    for(j=0;j<n;j++)
        for(i=0;i<n;i++)
             a[i][j]-=min[j];
         
    a_1_1=a[1][1];         //??a?1??1? 
    
    for(i=1;i<n-1;i++)     //????????? 
        a[0][i]=a[0][i+1];
    for(j=1;j<n-1;j++)
        a[j][0]=a[j+1][0];
    for(i=1;i<n-1;i++)
        for(j=1;j<n-1;j++)
            a[i][j]=a[i+1][j+1];  
            
    return a_1_1+sum(a,n-1);   //??n-1? 
}
