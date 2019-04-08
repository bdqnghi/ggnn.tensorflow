int main()
{
    int n,i,j;
    int z=0;
    scanf("%d",&n);
    for(i=3;i<=n-2;i+=2)
    {
                        for(j=2;j<i;j++)
                        {
                                         if(i%j==0)
                                         break;
                                         }
                                         if(j==i)
                                         {
                                                   for(j=2;j<i+2;j++)
                                                   {
                                                                      if((i+2)%j==0)
                                                                      break;
                                                                      }
                                                                      }
                                                                      if(j==i+2)
                                                                     { printf("%d %d\n",i,i+2);z=z+1;}
                                                                      }if(z==0)
                                                                      printf("empty");getchar();getchar(); }
