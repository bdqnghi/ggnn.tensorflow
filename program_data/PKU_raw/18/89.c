int main()
{
    int n,size,t,i,j,round,a[101][101],s[101],minx[101],miny[101];
    memset(s,0,sizeof(s));
    cin>>n;
    size=n;
	
    for(t=1;t<=n;t++)
    {
                     for(i=1;i<=n;i++)
                     {
                                      for(j=1;j<=n;j++)
                                      {
                                                       cin>>a[i][j];
                                      }
                                      
                     }
					 size=n;
                     for(round=1;round<=n-1;round++)
                     {
                                                    for(i=1;i<=size;i++)
                                                    {
                                                                        minx[i]=a[i][1];
                                                    }
                                                    for(i=1;i<=size;i++)
                                                    {
                                                                     for(j=1;j<=size;j++)
                                                                     {
                                                                                      if(a[i][j]<minx[i]) minx[i]=a[i][j];
                                                       
                                                       
                                                                     } 
                                                    }
                                                    for(i=1;i<=size;i++)
                                                     {
                                                                     for(j=1;j<=size;j++)
                                                                     {
                                                                                      a[i][j]=a[i][j]-minx[i];
                                                                     }
                                                     }
                                                     for(j=1;j<=size;j++)
                                                     {
                                                                         miny[j]=a[1][j];
                                                     }
                                                     for(j=1;j<=size;j++)
                                                    {
                                                                     for(i=1;i<=size;i++)
                                                                     {
                                                                                      if(a[i][j]<miny[j]) miny[j]=a[i][j];
                                                       
                                                       
                                                                     } 
                                                    }
                                                    for(i=1;i<=size;i++)
                                                     {
                                                                     for(j=1;j<=size;j++)
                                                                     {
                                                                                      a[i][j]=a[i][j]-miny[j];
                                                                     }
                                                     }
                                                     
                                                     s[t]=s[t]+a[2][2];
                                                     for(j=2;j<=size-1;j++)
                                                     {
                                                                      a[1][j]=a[1][j+1];                
                                                     }
                                                     for(i=2;i<=size-1;i++)
                                                     {
                                                                      a[i][1]=a[i+1][1];
                                                     }
                                                     for(i=2;i<=size-1;i++)
                                                     {
                                                                      for(j=2;j<=size-1;j++)
                                                                      {
                                                                                      a[i][j]=a[i+1][j+1]; 
                                                                      }
                                                     }
                                                     size--;
                                                     
                     }
                     
    }
    for(i=1;i<=n;i++)
    {
                     cout<<s[i]<<endl;
    }
    return 0;
} 
