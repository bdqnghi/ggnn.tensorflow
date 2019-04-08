main()
{
   int a,b,i,j;
   int c[100][100];
   scanf("%d %d",&a,&b);
   for(i=0;i<a;i++)
     for(j=0;j<b;j++)
       scanf("%d",&c[i][j]);
   for(i=0;i<b;i++)
   {
      for(j=0;j<=i&&j<a;j++)
         printf("%d\n",c[j][i-j]);
   } 
   for(i=b;i<a+b-1;i++)
       {
       for(j=i+1-b;j<a&&j<=i;j++)
          printf("%d\n",c[j][i-j]); 
       }
}