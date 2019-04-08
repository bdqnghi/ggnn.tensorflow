int convert(int (*pt)[5],int x,int y)
{
     int temp,i;
     if(x<0||x>4||y<0||y>4)
                           return 0;
     else
     {
         for(i=0;i<5;i++)
         {
                         temp=*(*(pt+x)+i);
                         *(*(pt+x)+i)=*(*(pt+y)+i);
                         *(*(pt+y)+i)=temp;
                         }
         }
     return 1;                           
}
int main()
{
    int n,m,i,j,a[5][5],*p,num;
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    scanf("%d ",&a[i][j]);
                                    }
                    }
    scanf("%d %d",&n,&m);
    num=convert(a,n,m);
    if(num==0)
              printf("error");
    if(num==1)
    {
              for(p=a[0];p<a[0]+25;p++)
              {
                                 if((p-a[0])%5==0 && p!=a[0])
                                 {
                                                  printf("\n");
                                                  printf("%d ",*p);
                                                  }
                                 else if((p-a[0])%5==4)
                                                  printf("%d",*p);
                                 else
                                     {
                                                  printf("%d ",*p);
                                                  }
                                 }
              }
    return 0;   
}
