int c[100];
int f(int a[],int b[])
{
    int i,d[100];
    for(i=0;i<100;i++)
    {d[i]=0;}
    for(i=0;i<100;i++)
    {
                      if(a[i]+b[i]+d[i]>=10)
                      {
                       c[i]=(a[i]+b[i]+d[i])%10;
                       d[i+1]=1;
                      }
                      else
                      c[i]=a[i]+b[i]+d[i];
    }
    return 0;
}
int main()
{
    int a[100],m,i,j;
    for(i=0;i<100;i++)
    {a[i]=0;}
    a[1]=2;
    cin>>m;
    if(m==0)
    cout<<"1"<<endl;
    else
    {
    for(i=1;i<m;i++)
    {
                     f(a,a);
                     for(j=0;j<100;j++)
                     {a[j]=c[j];} 
    }
    for(i=99;i>=0;i--)
    {if(a[i]!=0) break;}
    for(j=i;j>0;j--)
    {cout<<a[j];}
    }
    return 0;
}