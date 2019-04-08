
int main(){
   int n,i,sz[1000],j,k;
   int sum=0;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
                  scanf("%d",&sz[i]);
                  }
         for(i=0;i<n/2+1;i++)
         {
                         for(j=i+1;j<n;j++)
                         {
                                    if(sz[i]+sz[j]==k)
                                    {
                                           sum++;
                                           break;
                                           }
                                           }
                                           }
            
              if(sum!=0)
              {
                  printf("yes");
                  }
              if(sum==0)
              {
                        printf("no");
                        }
                             
                                                             
        return 0;
}