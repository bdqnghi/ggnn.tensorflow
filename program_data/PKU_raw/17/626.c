int main()
{
    char a[20][110]={0};
    int i,j,k,n=0;
    for(i=1;cin>>a[i];i++)
    {
                          n++;
    } 
    for(i=1;i<=n;i++)
    {
                     char b[110];
                     for(k=0;k<=109;k++)
                     {
                                        b[k]=' ';
                     }
                     int c[110]={0};
                     int p=0,q=0,m=0;
                     for(j=0;j<=109;j++)
                     {
                                        if(a[i][j]!=0)
                                        m++;
                    }
                     for(j=0;j<=m-1;j++)
                     {
                                        if(a[i][j]=='(')
                                        {
                                                     p++;
                                                     b[j]='$';
                                        }
                                        else if(a[i][j]==')')
                                        {
                                                     b[j]='?';
                                                     if(p>0)
                                                     {
                                                            b[j]=' ';
                                                            p--;
                                                            for(k=j-1;k>=0;k--)
                                                            {
                                                                            if((b[k]=='$')&&(c[k]==0)) break;
                                                            }
                                                            b[k]=' ';
                                                            c[k]=1;
                                                    }
                                        }
                     }
                     cout<<a[i]<<endl;
                     for(j=0;j<=m-2;j++)
                     {
                                        cout<<b[j];
                     }
                     cout<<b[m-1]<<endl;
    }
    return 0;
}