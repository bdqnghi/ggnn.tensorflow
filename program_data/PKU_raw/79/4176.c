main ()
{
  int m=1,n,i,j,k; 
  int a[301],b[301];
  while(m!=0) 
   {
    scanf("%d%d",&n,&m);
 
    for(i=0;i<301;i++)
       a[i]=1,b[i]=0;
    for(i=1;i<n;i++)
     {
      j=1;
      k=0;
      while(k<m)
       {
         if (a[(j+b[i-1])%n])//???????????? 
              k++;
         if (k==m)
           {
              a[(j+b[i-1])%n]=0;//?m?????????0????????     
              b[i]=(j+b[i-1])%n;//?????????? 
           }
         j++;
       }
     }
   for (i=0;i<n;i++)
     if(a[i])
       {
         if (i==0)
            printf("%d\n",n);
         else
            printf("%d\n",i);
         break;
       }
}  
} 