int main()
{
    int i,j,n;
    cin>>n; 
    char a[110][110];
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cin>>a[i][j];
                    }
    }//?? 
    int d,m;
    cin>>m;//?? 
    for(d=1;d<m;d++)
    {
                     int b[110][110];
                     {
                         for(i=0;i<n;i++)
                         {
                                         for(j=0;j<n;j++)
                                         {
                                                         b[i][j]=0;
                                         }
                         }
                     }//????????? 
                     for(i=0;i<n;i++)
                     {
                                     for(j=0;j<n;j++)
                                     {
                                                     if(a[i][j]=='@')
                                                     {
                                                                    if(a[i+1][j]=='.' && i<n)
                                                                    {
                                                                                      b[i+1][j]=1;
                                                                    } 
                                                                    if(a[i-1][j]=='.'&& i>0)
                                                                    {
                                                                                      b[i-1][j]=1;
                                                                    } 
                                                                    if(a[i][j+1]=='.'&& j<n)
                                                                    {
                                                                                      b[i][j+1]=1;
                                                                    } 
                                                                    if(a[i][j-1]=='.' &&j>0)
                                                                    {
                                                                                      b[i][j-1]=1;
                                                                    } 
                                                     }
                                     }
                     }//????????????????? 
                     for(i=0;i<n;i++)
                     {
                                     for(j=0;j<n;j++)
                                     {
                                                     if(b[i][j]==1)
                                                     {
                                                                   a[i][j]='@';
                                                     }
                                     }
                     }//?? 
    }
/*
    cout<<endl;
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cout<<a[i][j];
                    }
                    cout<<endl;
    }
*/
    int count=0;
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    if(a[i][j]=='@')
                                    {
                                                    count++;
                                    }
                    }
    }
    cout<<count;
    return 0;
}
