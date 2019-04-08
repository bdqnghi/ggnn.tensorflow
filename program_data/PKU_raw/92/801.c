int n;
int tj[1001],qw[1001];

int main()
{
	void sort(int speed[]);
    int i;
    for(scanf("%d",&n);n>0;scanf("%d",&n))
    {
          for(i=0;i<n;i++)
          {
              scanf("%d",&tj[i]);
          }
           for(i=0;i<n;i++)
          {         
            scanf("%d",&qw[i]);
           }
         sort(tj);
         sort(qw);
         int start_tj=0,end_tj=n-1;
         int start_qw=0,end_qw=n-1;
         int money=0;
        while(start_tj<=end_tj)
        {
            while((tj[start_tj]>qw[start_qw])&&(start_tj<=end_tj))
            {
                      money=money+200;
                      start_tj++;
                      start_qw++;
            }
            while((tj[end_tj]>qw[end_qw])&&(start_tj<=end_tj))
            {
                     money=money+200;
                     end_tj--;
                     end_qw--;     
            }
            if(start_tj<=end_tj)
            {
                   if(tj[start_tj]<qw[end_qw])
                    money=money-200;
                    start_tj++;
                    end_qw--;
            }
         }
    printf("%d\n",money);
  }
	return 0;
}
void sort(int speed[])
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
         for(j=i+1;j<=n-1;j++)
         {
                if(speed[j]<speed[i])
                {
                      temp=speed[j];
                      speed[j]=speed[i];
                      speed[i]=temp;                 
                 }
         }
    }
}


