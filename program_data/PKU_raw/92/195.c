int n;
int tian[1001],king[1001];
void sort(int a[])
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
         for(j=i+1;j<=n-1;j++)
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
    int i;
    for(scanf("%d",&n);n>0;scanf("%d",&n))
    {
          for(i=0;i<n;i++)
          {
              scanf("%d",&tian[i]);
          }
           for(i=0;i<n;i++)
          {         
            scanf("%d",&king[i]);
           }
         sort(tian);sort(king);
         int begin_tian=0,end_tian=n-1;
         int begin_king=0,end_king=n-1;
         int money=0;
        while(begin_tian<=end_tian)
        {
            while((tian[begin_tian]>king[begin_king])&&(begin_tian<=end_tian))
            {
                      money=money+200;
                      begin_tian++;begin_king++;
            }
            while((tian[end_tian]>king[end_king])&&(begin_tian<=end_tian))
            {
                     money=money+200;
                     end_tian--;end_king--;     
            }
            if(begin_tian<=end_tian)
            {
                   if(tian[begin_tian]<king[end_king])
                    money=money-200;
                    begin_tian++;end_king--;
            }
         }
    printf("%d\n",money);
  }
}

