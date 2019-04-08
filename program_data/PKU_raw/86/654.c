int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         int breaktime,j;                 //????
         scanf("%d",&breaktime) ;
         int n[breaktime],k=0,l=0;        //l??? 
         if(breaktime==0)
             printf("60\n");
         else
         {
             for(j=1;j<=breaktime;j++)
             {
                   scanf("%d",&n[j]);
                   if(3*j+n[j]<=60)
                       k=k+1;
                   else if(3*j+n[j]>=63)
                       k=k;
                   else if(3*j+n[j]==61)
                   {
                        k=k+1;
                        l=1;
                   }
                   else if(3*j+n[j]==62) 
                   {
                        k=k+1;
                        l=2;
                   }
             }
             int total;
             total=60-3*k+l; 
             printf("%d\n",total);
         }
    }
    return 0;
}        
                         
