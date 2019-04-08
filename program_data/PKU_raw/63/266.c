//?????
int main()
{
    int x1=0,y1=0,x2=0,y2=0;
    int i=0,j=0,k=0;
    cin>>x1>>y1;
    int a[101][101];
    int b[101][101];
    int c[101][101];
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y1;j++)
        {
             cin>>a[i][j];
        }
    }
    cin>>x2>>y2;
    for(i=0;i<x2;i++)
    {
        for(j=0;j<y2;j++)
        {
             cin>>b[i][j];
        }
    }
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y2;j++)
        {
             c[i][j]=0;
             for(k=0;k<y1;k++)                  //?????????? 
             {
                 c[i][j]=c[i][j]+a[i][k]*b[k][j];
             }             
        }
    }
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y2-1;j++)
        {
           cout<<c[i][j]<<" ";        //???? 
        }
        cout<<c[i][y2-1]; //????????? 
        cout<<"\n";
    }
    
    return 0;
}                                                         
