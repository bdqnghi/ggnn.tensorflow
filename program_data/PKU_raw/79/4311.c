int main()
{
    int i;
    int n[10000],m[10000];
    int sum,k,q,f;
    int p=0; 
  for (i=1;i<10000;i++)
       {
        scanf("%d %d",&n[i],&m[i]);
        if (n[i]==0)
        {break; }
        p++;
       }
    i=1;
    int y;       
    int a[10000];
    while (i<=p)
       {
         if (n[i]==1||m[i]==1)
         printf("%d\n",n[i]);
         else
         {for (y=0;y<10000;y++)
           { a[y]=1;}
         sum=0;
         k=0;
         q=0;
         while (q!=n[i]-1)
         {
          sum=sum+a[k];
          if (sum==m[i])
             {a[k]=0;
              q++;
              sum=0;}
          if (a[k]!=0)
              {f=k+1;}
              k++;
          if (k>=n[i])
             {k=0;} 
         }
         printf("%d\n",f);}
         i++;    
       }
}
