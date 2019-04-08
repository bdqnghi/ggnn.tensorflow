int main()
{
    int a[6][6],b[6][6]={0},c[6][6]={0};
    int i,j,p=0;
    for(i=1;i<=5;i++)
      for(j=1;j<=5;j++)
      cin>>a[i][j];
    for(int k=1;k<=5;k++) 
            for(int l=1;l<=5;l++)
                    for(int i=1;i<=5;i++)
                    {
                            if(i==l) continue;
                            if(a[k][l]<a[k][i])
                            b[k][l]=b[k][l]+1;
                    }
    for(int l=1;l<=5;l++)   
            for(int k=1;k<=5;k++)
                    for(int i=1;i<=5;i++)
                    {
                            if(i==k)continue;
                            if(a[k][l]>a[i][l])
                            c[k][l]=c[k][l]+1;
                    }
     for(int i=1;i<=5;i++)
           for(j=1;j<=5;j++) 
             
                    if(b[i][j]+c[i][j]==0)
                    {
                    cout<<i<<" "<<j<<" "<<a[i][j]<<endl;
                    p=1; }
           if(p==0)
           cout<<"not found"<<endl;
     return 0;
}
