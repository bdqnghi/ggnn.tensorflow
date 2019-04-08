int main()
{int a[100][100][100]={0};
 int min[100][100]={0};
 int n,i,j,k,l,s,sum[100]={0};
 cin>>n;
 for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
    {for(k=0;k<n;k++)
    cin>>a[i][j][k];}}
 for(i=0;i<n;i++)
   {for(s=n;s>1;s--)
   {for(j=0;j<s;j++)
     {min[i][j]=a[i][j][0];
                      for(l=0;l<s;l++)
                      {if(a[i][j][l]<min[i][j])
                        min[i][j]=a[i][j][l];}
                        for(k=0;k<s;k++)
                        a[i][j][k]=a[i][j][k]-min[i][j];
                        }
  for(k=0;k<s;k++)
   {min[i][k]=a[i][0][k];
     for(l=0;l<s;l++)
                      {if(a[i][l][k]<min[i][k])
                        min[i][k]=a[i][l][k];}
   for(j=0;j<s;j++)
     a[i][j][k]=a[i][j][k]-min[i][k];}
   sum[i]=sum[i]+a[i][1][1];
   for(j=0;j<s;j++){for(k=1;k<s-1;k++)
    a[i][j][k]=a[i][j][k+1];}
   for(k=0;k<s-1;k++){for(j=1;j<s-1;j++)
     a[i][j][k]=a[i][j+1][k];}}}
   for(i=0;i<n;i++)
    cout<<sum[i]<<endl;
    return 0;
    }
 
