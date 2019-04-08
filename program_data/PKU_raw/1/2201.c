void find(int m,int j,int *p)
{   
    for(;j<=m;j++)
    {
                  if(m==j)
                  {
                          (*p)++;
                          break;
                  }
                  if(m%j==0) find(m/j,j,p);
    }
}
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    int count=0;
                    int *p;
                    p=&count;
                    scanf("%d",&m);
                    find(m,2,p);
                    printf("%d\n",count);
    }

    return 0; 
}
