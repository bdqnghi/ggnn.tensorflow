
int main()
{
   int val[LEN][LEN]; 
   int i,j,posr,posc,n,r,c,flag=0;
   
   scanf("%d",&n);
   
   for (i=0;i<=n-1;i++)
       for (j=0;j<=n-1;j++)
           scanf("%d",&val[i][j]);
           
   for (i=0;i<=n-1;i++)
       for (j=0;j<=n-1;j++)
           if (val[i][j]==0&&flag==0) 
              {flag=1;posr=i;posc=j;}
   
 
   i=posr;
   while (val[i++][posc]==0);
   
   r=i-posr-3;
   
   for (j=posc;val[posr][j]==0;j++);
   c=j-posc-2;
   
   printf("%d",r*c);
   
   getchar();getchar();
   
   return 0;
   
}
