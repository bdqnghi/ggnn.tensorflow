int main()
{
 int n,k;
 int remain,last=1;
 int i;
 scanf("%d %d",&n,&k);
 for(last=1;last>0;last++)
    {
     for(remain=last*n+k,i=1;i<n;i++)
        {
          if(remain%(n-1)==0)
             remain=remain*n/(n-1)+k;
          else
             {
              last=-last;
              break;
             }
        }
      if(last>0)
        printf("%d",remain);    
      last=-last;
   }
}