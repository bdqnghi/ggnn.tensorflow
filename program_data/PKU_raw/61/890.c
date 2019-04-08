main()
{ int n,i,j,a;
  int b[21];
  b[1]=1; b[2]=1;
  scanf("%d",&n);
 for(j=3;j<=20;j++)
   b[j]=b[j-1]+b[j-2];
 
 for(i=1;i<=n;i++)
{  scanf("%d",&a);
if(i==1)
     printf("%d",b[a]);
   else
printf("\n%d",b[a]);
}
getchar();
getchar();
}
