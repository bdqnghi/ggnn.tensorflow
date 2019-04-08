int function(char* t,char* b)
{
    int i;
    for(i=0;i<5;i++)
    {
                  if(t[i]!=b[i])
                  return 0;
    }
    return 1;
}
int main()
{
    int max=0;
    int n;
    cin>>n;
    char a[500]={0};
    cin>>a;
    int c[500]={0};
    char b[500][5]={0};
    int i,j,k;
    for(i=0;i<500-n+1;i++)
    for(j=0;j<n;j++)
    b[i][j]=a[i+j];
    for(i=0;i<500;i++)
    {
                      if(b[i][0]!=0)
                      for(j=i;j<500;j++)
                      {
                                        if(function(b[j],b[i]))
                                        {
                                                               c[i]++;
                                                               if(i!=j)
                                                               b[j][0]=0;
                                        }
                      }
    }
    for(i=0;i<500;i++)
    {
                      if(c[i]>max)
                      max=c[i]; 
                      }
    if(max>1)
    {
             cout<<max<<endl;
             for(i=0;i<500;i++)
             {
                               if(c[i]==max)
                               cout<<b[i]<<endl;
             }
             }
    else
    cout<<"NO";

    return 0;
}
