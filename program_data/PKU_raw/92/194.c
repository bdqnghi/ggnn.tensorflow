long n;
long tian[1010],king[1010];
void sort(long a[])
{
    long i,j,temp;
    for(i=1;i<n;i++)
    {
         for(j=i+1;j<=n;j++)
         {
                if(a[j]<a[i])
                {
                      temp=a[j];
                      a[j]=a[i];
                      a[i]=temp;                 
                 }
         }
    }
}

void main()
{
    long i,j,money;
    for(scanf("%ld",&n);n>0;scanf("%ld",&n))
    {
          for(i=1;i<=n;i++)
          {
              scanf("%ld",tian+i);
          }
           for(i=1;i<=n;i++)
          {         
            scanf("%ld",king+i);
           }
         sort(tian);sort(king);
         long begin_tian=1,end_tian=n;
          long begin_king=1,end_king=n;
         money=0;
        while(begin_tian<=end_tian)
        {
            while((tian[begin_tian]>king[begin_king])&&(begin_tian<=end_tian))
            {
                      money+=200;
                      begin_tian++;begin_king++;
            }
            while((tian[end_tian]>king[end_king])&&(begin_tian<=end_tian))
            {
                     money+=200;
                     end_tian--;end_king--;     
            }
            if(begin_tian<=end_tian)
            {
                   if(tian[begin_tian]<king[end_king])
                    money-=200;
                    begin_tian++;end_king--;
            }
         }
    printf("%ld\n",money);
  }
}