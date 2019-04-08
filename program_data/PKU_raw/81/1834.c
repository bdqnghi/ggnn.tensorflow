
int su(int n,int m,int *a)
{
    int e=0,i;
    if(n>=0&&n<=4&&m>=0&&m<=4)
    {
                              for(i=0;i<5;i++)
                              {
                              e=*(a+m*5+i);
                              *(a+m*5+i)=*(a+n*5+i);
                              *(a+n*5+i)=e;
                              }
    return 1;
    }
    else return 0;
}
int main(int argc, char *argv[])
{
  int a[5][5],i,j,m,n;
  
  for(i=0;i<5;i++)
  {
                  for(j=0;j<5;j++)
                  {
                                  scanf("%d",&a[i][j]);
                  }
  }
                 
  scanf("%d%d",&n,&m);
                  if(su(n,m,*a))
                  {
                             for(i=0;i<5;i++)
                             {
                                            for(j=0;j<4;j++)
                                            {
                                                            printf("%d ",a[i][j]);
                                            }
                                            printf("%d\n",a[i][4]);
                             }
                  }
                  if(su(n,m,*a)==0)
                  printf("error");                           
  
  
  
  
  return 0;
}
