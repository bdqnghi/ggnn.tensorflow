int main ()
{
 int n,j,k,b,c,x,y;
 b=c=0;
 scanf("%d",&n);
 int sz[n][n];
 for(j = 0; j <=n-1; j++)
 {
   for(k = 0; k <=n-1; k++)
     {
       scanf("%d",&sz[j][k]); 
       if(sz[j][k]==0)
       {
         x=j;
         y=k; }
                           }
                               }
 for(j = 0; j <= n-1; j++)
 {
   for(k = 0; k <=n-1; k++)
     {
       if(sz[j][k]==0)
       {
         b=j;
         c=k;
         break;     
        }
         }
     if(sz[b][c]==0)
     break;    
         }
   int m;
   m=(x-b-1)*(y-c-1);
   printf("%d",m);
   return 0;
}


					