int main()
{
    int n,i,k,num;
    int a[N],b[N];
    scanf("%d%d",&n,&num);
    
    for(i=0;i<n;i++)
   {
       scanf("%d",&(a[i]));
   }
   for(k=0;k<n-1;k++)
   {
       for(i=1;i<n-k;i++)
       {
           if(a[k]+a[k+i]==num)
           {
              goto done;
           }
       }
     
   }
   
   
   done:if(k>=n-1)
        {
            printf("no");
        }
        else
        {
             printf("yes");
        }
    return 0;
}






