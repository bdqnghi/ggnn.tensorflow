main()
{
 int i,a,b,n,flag=0,c[101000],d[101000];
 scanf("%d",&n);
 while (scanf("%d%d",&a,&b)==2)
 {
   if (a==0&&b==0)
     break;
   c[b]++;
   d[a]++;     
 }
 for (i=0;i<=n-1;i++)
 if (c[i]==n-1&&d[i]==0)
  {
    printf("%d",i);
    flag=1;                        
  }
 if (flag==0) 
   printf("NOT FOUND\n");
   getchar();
   getchar();
   return 0;    
}
