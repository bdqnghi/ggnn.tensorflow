void array(int *a,int n)          //array larger-less
{
     
     int i,j,t;
     int *p=a;
     for(i=1;i<=n-1;i++)
     {
                        for(j=1;j<=n-i;j++)
                        {
                                          if(*(p+j)<*(p+j+1))
                                          {
                                                             t=*(p+j);
                                                             *(p+j)=*(p+j+1);
                                                             *(p+j+1)=t;
                                          }
                        }
     }
}
int result(int *a,int *b,int n)
{
    int i,j,t,item[5000]={0},sum=-500;
    for(i=1;i<=n;i++)
    {
                     for(j=1;j<=n;j++)
                     {
                                      t=i+j-1;
                                      if(t>n){t=t-n;}
                                      if(a[t]>b[j]){item[i]++;}
                                      if(a[t]<b[j]){item[i]--;}
                     }
                     if(item[i]>sum)
                     {sum=item[i];}
    }
    return(sum); 
}
int main()
{
for(;;){
      int n,i,j,money;
      int a[5000],b[5000];
      memset(a,0,sizeof(a));
      memset(b,0,sizeof(b));
      scanf("%d",&n);
      if(0==n){break;}
      for(i=1;i<=n;i++)
      {scanf("%d",&a[i]);}
      for(i=1;i<=n;i++)
      {scanf("%d",&b[i]);}
      
      array(a,n);
      array(b,n);
      
      /*for(i=1;i<=n;i++)
      {printf("%d ",a[i]);}*/
      
      money=result(a,b,n)*200;
      printf("%d\n",money);
}
}