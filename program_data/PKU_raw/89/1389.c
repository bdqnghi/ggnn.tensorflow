int main()
{
    int n,i,j,c,d,t=0;
    scanf("%d",&n);
    int a[20000]={0};
    int b[20000]={0};
    for(i=0;i<20000;i++)
    {
      scanf("%d %d",&c,&d);
      if((c==0)&&(d==0))
      break;
      a[c]=a[c]-1;
      b[d]=b[d]+1;      
      }
      for(j=0;j<i;j++)
      {
        if((b[j]==(n-1))&&(a[j]==0))
        {printf("%d\n",j);t=1;}
        }
        if(t==0)
        printf("NOT FOUND");
         
              return 0;
              }   

