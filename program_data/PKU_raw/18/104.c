int main()
{
    int n=0,s=0,t=0,k=0,i=0,j=0,m=0,q=0,min=0,r=0,h=0,w=0,v=0;
    cin>>n;
    for(r=1;r<=n;r++)
    {
       int number=0;
       const int p=n;
       int a[p+1][p+1];
       for(i=1;i<=p;i++)
       {
              for(j=1;j<=p;j++)
              {
                  cin>>a[i][j];
              }
       }
       for(k=1;k<=p-1;k++)
       {
           for(s=k;s<=p;s++)
           {
               min=a[s][k];
               for(t=k;t<=p;t++)
               {
                   if(a[s][t]<min)
                   min=a[s][t];
               }
               for(m=k;m<=p;m++)
               {
                   a[s][m]-=min;
               }
           }
           for(h=k;h<=p;h++)
           {
               min=a[k][h];
               for(w=k;w<=p;w++)
               {
                   if(a[w][h]<min)
                   min=a[w][h];
               }
               for(q=k;q<=p;q++)
               {
                  a[q][h]-=min;
               }
           }
           number+=a[k+1][k+1];
           a[k+1][k+1]=a[k][k];
           for(v=k+2;v<=p;v++)
           {
              a[k+1][v]=a[k][v];
              a[v][k+1]=a[v][k];
           }
       }
       cout<<number<<endl;
    }
       return 0;
}